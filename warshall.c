#include<stdio.h>

int n;
int a[20][20];
void warshall(int a[][20])
{
	for(int k=0;k<n;k++)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
				a[i][j]=a[i][j] || (a[i][k]&&a[k][j]);
		}
	}
}

int main()
{
	
	printf("Enter the no. of vertices=");
	scanf("%d",&n);
	
	printf("Enter the adjacency matrix");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
			
		}
	}
	warshall(a);
	printf("Transitive closure is");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d\n",a[i][j]);
			
		}
	}
	return 0;
}
