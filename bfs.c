#include<stdio.h>


int f=0;
int r=-1;
int a[20][20],q[20],visited[20],n,i,j,flag=0;
void bfs(int v)
{
	int w;
	visited[v]=1;
	q[++r]=v;
	while(f<=r)
	{
		v=q[f++];
		for(w=1;w<=n;w++)
		if((a[v][w]==1)&&(visited[w]==0))
		{
			visited[w]=1;
			flag=1;
			printf("%d",w);
			q[++r]=w;
		}
	}
			
}
int main()
{
	int v;
	printf("Enter the no. of vertices=");
	scanf("%d",&n);
	
	
	printf("Enter the adjacency matrix=\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&a[i][j]);
			
		}
	}
	for(i=1;i<=n;i++)
	{
		
		visited[i]=0;
	}
	printf("Enter the start vertex=");
	
	scanf("%d",&v);
	printf("ALl the nodes reachable from %d are\n ",v);
	bfs(v);
	
	if(flag==0)
		printf("NO path\n");
	return 0;
}
/*output:
Enter the no. of vertices=5                                                                                                         
Enter the adjacency matrix=                                                                                                         
0 1 1 0 1                                                                                                                           
1 1 0 0 0                                                                                                                           
0 1 0 1 0                                                                                                                           
1 0 0 0 1                                                                                                                           
0 0 0 1 0                                                                                                                           
Enter the start vertex=2                                                                                                            
ALl the nodes reachable from 2 are                                                                                                  
 1354   
 /*
