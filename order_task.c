
#include <stdio.h> 
 int stk[100];
int MAXSIZE = 100; 
int top = -1;            
int n,a[30][30],q[30],f=0,r=-1;
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

void lextopo()
{
	int indeg[100];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i][j]==1)
				indeg[j]++;
		}
			
	}
	
	for(int i=0;i<n;i++)
	{
		if(indeg[i]==0)
			q[++r]=i;
	}
	int c=0;
	int toporder[100];
	while(f<=r)
	{
		int min=q[f++];
		for(int i=0;i<n;i++)
		{
		    toporder[i]=min;
		}
	
		for(int i=0;i<n;i++)
		{
			if(a[min][i]==1)
			{
				indeg[i]--;
				if(indeg[i]==0)
					q[++r]=i;
			}
			
		}
		c++;
	}
	if(c!=n)
	{
		printf("-1");
		return;
	}
	for(int i=0;i<n;i++)
		printf("%d\n",toporder[i]);
			
}

int main()
{
	int p,x,y;
	int pre[100][100];
	printf("Enter the no of tasks: ");
scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			a[i][j]=0;
	}
	printf("Enter the no. of pairs: ");
	scanf("%d",&p);
	printf("Enter the pairs\n");
	for(int i=0;i<p;i++)
	{
		scanf("%d%d",&x,&y);
		a[y][x]=1;
	}
	
	printf("The ordering of tasks you should pick to finish all tasks:\n");
	lextopo();
	return 0;
}
