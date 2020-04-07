#include<stdio.h>
#define NODE 4

   int stk[100];
int MAXSIZE = 100; 
int graph[NODE][NODE] = {
   {0, 1, 1, 0},
   {0, 0, 0, 1},
   {0, 0, 0, 0},
   {0, 0, 1, 0},
   
};
int top = -1;            

int isempty() {

   if(top == -1)
      return 1;
   else
      return 0;
}
   
int isfull() {

   if(top == MAXSIZE)
      return 1;
   else
      return 0;
}

int peek() {
   return stk[top];
}

void pop()
{
   int data;
	
   if(!isempty()) 
   {
      data = stk[top];
      top = top - 1;   
      
   } 
   else 
   {
      printf("Could not retrieve data, Stack is empty.\n");
   }
}

void push(int data) {

   if(!isfull()) {
      top = top + 1;   
      stk[top] = data;
   } else {
      printf("Could not insert data, Stack is full.\n");
   }
}
void topoSort(int u, int visited[],int stk[])
{
   visited[u] = 1;               

   for(int v = 0; v<NODE; v++) 
   {
      if(graph[u][v])
      {           
         if(!visited[v])
            topoSort(v, visited, stk);
      }
   }
   push(u);     

}

void performTopologicalSort() 
{
   int vis[NODE];

   for(int i = 0; i<NODE; i++)
      vis[i] = 0;     

   for(int i = 0; i<NODE; i++)
      if(!vis[i])     
         topoSort(i, vis, stk);

   while(!isempty()) 
   {
     printf("%d\t",peek());
      pop();
   }
}

void main() 
{
   printf( "Nodes after topological sorted order: ");
   performTopologicalSort();
}



o/p:
Nodes after topological sorted order: 0 1       3       2    
