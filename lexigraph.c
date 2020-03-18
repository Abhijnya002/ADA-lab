#include <stdio.h> 
int s[100];
int n,a[30][30],q[30],f=0,r=-1,i;
void lextopo()
{
	int indeg[n];
	for(i=0;i<n;i++)
	{
		indeg[i]=0;
	}
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
	int toporder[50];
	int o=0;
	while(f<=r)
	{
		int min=q[f++];
		
		toporder[o]=min;
		o++;
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
	for(int i=0;i<o;i++)
		printf("%d",toporder[i]);
			
}

int main()
{
	printf("Enter the no of vertices\n");
	scanf("%d",&n);
	printf("Enter the adjacency matrix\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}
	printf("lexicographically smallest topological ordering is");
	lextopo();
	return 0;
}