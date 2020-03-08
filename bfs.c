#include<stdio.h>

int f=0;
int r=-1;
int a[20][20],q[20],visited[20],n,i,j;
void bfs(int v)
{
	
	for(i=0;i<n;i++)
	
		if(a[v][i] && !visited[i])
		
			q[++(r)]=i;
		
	
		if(f<=r)
		{ 
                 	visited[q[(f)]]=1; 
                 	bfs(q[(f)++]); 
                } 
}
int main()
{
	int v;
	printf("Enter the no. of vertices=");
	scanf("%d",&n);
	
	
	printf("Enter the adjacency matrix=\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
			
		}
	}
	for(i=0;i<n;i++)
	{
		q[i]=0;
		visited[i]=0;
	}
	printf("Enter the start vertex=");
	
	scanf("%d",&v);
	bfs(v);
	printf("ALl the nodes reachable from %d are= ",v);
	for(i=0;i<n;i++)
	{
		if(visited[i])
		{
			printf("%d\t",i);
		}
	}
	
	return 0;
}
/* output
Enter the no. of vertices
4
Enter the adjacency matrix
0 1 1 0
0 0 0 1
0 1 0 0
0 0 0 0
Enter the start vertex
0
ALl the nodes reachable from 0 are 
1 2 3 
*/