/* From a given vertex in a weighted connected graph, find shortest paths to other vertices using Dijkstra’s algorithm. */

#include<stdio.h>

int a[30][30],n;
int minimum(int visited[],int dist[])
{
	int mindis=10000, mini;
	for(int i=0;i<n;i++)
	{
		if(!visited[i] && dist[i]<mindis)
		{
			mindis=dist[i];
			mini=i;
		}
	}
	return mini;
}

void dijkstra(int src)
{
	int dist[n],visited[n];
	
	for(int i=0;i<n;i++)
	{
		dist[i]=10000;
		visited[i]=0;
	}
	dist[src]=0;
	for(int i=0;i<n-1;i++)
	{
		int u=minimum(visited,dist);
		visited[u]=1;
		for(int v=0;v<n;v++)
		{
			if(!visited[v] && a[u][v]!=10000 && dist[u]!=10000 && (dist[u]+a[u][v])<dist[v])
				dist[v]=dist[u]+a[u][v];
		}
	}
	printf("Shortest paths to all other vertices from  %d is\n",src);
	printf("Vertices\tDistance from source\n");
	for(int i=0;i<n;i++)
	{
		if(i!=src)
			printf("%d\t\t%d\n",i,dist[i]);
	}
}

int main()
{
	printf("Enter the no. of vertices=");
	scanf("%d",&n);
	printf("Enter the weighted adjacency matrix (enter 10000 if there is no edge)=\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}
	int src;
	printf("Enter the source vertex=");
	scanf("%d",&src);
	dijkstra(src);
	return 0;
}
/* output
Enter the no. of vertices
5
Enter the weighted adjacency matrix (enter 10000 if there is no edge)
0 3 10000 7 10000
3 0 4 2 10000
10000 4 0 5 6
7 2 5 0 4
10000 10000 6 4 0
Enter the source vertex
0
Shortest paths to all other vertices from  0 is 
Vertices	Distance from source
1		3
2		7
3		5
4		9
*/