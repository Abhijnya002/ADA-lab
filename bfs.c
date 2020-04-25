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
 
 
 
 

#include<stdio.h>
#include<stdlib.h>
 
#define MAX 100  
 
#define initial 1
#define waiting 2
#define visited 3
 
int n;    
int adj[MAX][MAX];
int state[MAX]; 
void create_graph();
void BF_Traversal();
void BFS(int v);
 
int queue[MAX], front = -1,rear = -1;
void insert_queue(int vertex);
int delete_queue();
int isEmpty_queue();
 
int main()
{
	create_graph();
	BF_Traversal();
	return 0;
}
 
void BF_Traversal()
{
	int v;
	
	for(v=0; v<n; v++) 
		state[v] = initial;
	
	printf("Enter Start Vertex for BFS: \n");
	scanf("%d", &v);
	BFS(v);
}
 
void BFS(int v)
{
	int i;
	
	insert_queue(v);
	state[v] = waiting;
	
	while(!isEmpty_queue())
	{
		v = delete_queue( );
		printf("%d ",v);
		state[v] = visited;
		
		for(i=0; i<n; i++)
		{
			if(adj[v][i] == 1 && state[i] == initial) 
			{
				insert_queue(i);
				state[i] = waiting;
			}
		}
	}
	printf("\n");
}
 
void insert_queue(int vertex)
{
	if(rear == MAX-1)
		printf("Queue Overflow\n");
	else
	{
		if(front == -1) 
			front = 0;
		rear = rear+1;
		queue[rear] = vertex ;
	}
}
 
int isEmpty_queue()
{
	if(front == -1 || front > rear)
		return 1;
	else
		return 0;
}
 
int delete_queue()
{
	int delete_item;
	if(front == -1 || front > rear)
	{
		printf("Queue Underflow\n");
		exit(1);
	}
	
	delete_item = queue[front];
	front = front+1;
	return delete_item;
}
 
void create_graph()
{
	int count,max_edge,origin,destin;
 
	printf("Enter number of vertices : ");
	scanf("%d",&n);
	
	
	printf("Enter the adjacency matrix=\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&adj[i][j]);
			
		}
	}
}
