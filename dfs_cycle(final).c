#include<stdio.h>
#include<stdlib.h>


int A[20][20],visited[20],v=0,count=0,n;
int seq[20],s=0,connected=1,acyclic=1;


void DFS();
void DFSearch(int cur);
int main() 
{    
    int i,j;

    printf("\nEnter no of Vertices: ");
    scanf("%d",&n);

    printf("\nEnter the Adjacency Matrix(1/0):\n");
    for(i=1;i<=n;i++)
            for(j=1;j<=n;j++)
        scanf("%d",&A[i][j]);

    printf("\nThe Depth First Search Traversal:\n");

    DFS();

    for(i=1;i<=n;i++)
        printf("%c\t",'a'+seq[i]-1);

    if( acyclic) 
    printf(" \nAcyclic Graph!");
    if( !acyclic) 
    printf("\n Cyclic Graph!");

    return 0;
   }


void DFS()
{ 
    int i;
    for(i=1;i<=n;i++)
        if(!visited[i])
        {
           if(i>1) connected=0;
                DFSearch(i);    
        } 
}

void DFSearch(int cur) 
{
    int i,j;
    visited[cur]=++count;
    seq[count]=cur; 
    for(i=1;i<count-1;i++)
            if(A[cur][seq[i]]) 
                  acyclic=0;

    for(i=1;i<=n;i++)
        if(A[cur][i] && !visited[i])
           DFSearch(i);
}


//output
Enter no of Vertices: 3                                                                                                         
                                                                                                                                
Enter the Adjacency Matrix(1/0):                                                                                                
0 1 0                                                                                                                           
0 0 1                                                                                                                           
1 0 0                                                                                                                           
                                                                                                                                
The Depth First Search Traversal:                                                                                               
b       c       a                                                                                                               
 Cyclic Graph!           
    
    
    
Enter no of Vertices: 3                                                                                                       
                                                                                                                              
Enter the Adjacency Matrix(1/0):                                                                                              
0 1 0                                                                                                                         
0 0 1                                                                                                                         
0 0 0                                                                                                                        
                                                                                                                              
The Depth First Search Traversal:                                                                                             
b       c       `                                                                                                             
Acyclic Graph!        
