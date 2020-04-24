#include <stdio.h> 

   
// Driver program to test above functions 
int main() 
{ 
    int arr[100][100],k,n;
    printf("Enter the no. of arrays=");
	scanf("%d",&k);
    printf("Enter the no. of vertices=");
	scanf("%d",&n);
	printf("Enter the adjacency matrix=\n");
	for(int i=0;i<k;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
			
		}
	}
	int w=n*k;
    int output[w],c=0; 
      for(int i=0; i<k; i++) 
    { 
        for(int j=0; j<n ;j++) 
        {
            output[c++]=arr[i][j]; 
        }
    } 
   for(int i=1;i<w;i++)
	{
		for(int j=0;j<w;j++)
		{
			if(output[i]<output[j])
			{
				int temp=output[i];
				output[i]=output[j];
				output[j]=temp;
			}
		}
	}
    printf("merged array is\n");
    for(int k=0;k<w;k++)
    {
        printf("%d\n",output[k]);
    }
    return 0; 
} 