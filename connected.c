#include<stdio.h>

int a[20][20],n,visited[20],s[20],top=-1,c=1,flag=0;
void dfs(int v)
{
	visited[v]=1;
	s[++top]=v;
	
	for(int i=1;i<=n;i++)
	{
		if(a[v][i]==1 && !visited[i])
		{
			flag=1;
			c++;
			
			dfs(i);
		}
		
	}
	if(flag==0)
	{
		for(int j=1;j<=n;j++)
		{
			if(a[s[top]][j]==1 && !visited[j])
			{
				flag==1;
				c++;
				
				dfs(j);
			}
			
		}
		if(flag==0)
			top--;
	}
	

}

int main()
{
	int v;
	printf("Enter the no of vertices=");
	scanf("%d",&n);
	printf("Enter the adjacency matrix=\n");
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
			scanf("%d",&a[i][j]);
	}

	for(int i=1;i<=n;i++)
		visited[i]=0;
	
	
	dfs(1);
	
	if(c==n)
		printf("Connected graph");
	else
		printf("Graph is not connected");
	

	return 0;
}

/* output
Enter the no of vertices
4
Enter the adjacency matrix
0 1 0 0
0 0 1 0
0 0 0 1
0 1 0 0
Connected graph
*/