#include<stdio.h>
#include<time.h>
void sort(int a[],int n);
int main()
{
	int n,i;
	printf("enter the number of elements=");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements=\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	clock_t t; 
	t=clock();
	sort(a,n); 
    	t = clock() - t; 
	double time_taken = ((double)t)/CLOCKS_PER_SEC; 
    	printf("sort function took %f seconds to execute \n", time_taken); 
	
}
void sort(int a[],int n)
{
	int i,j,temp,pos,small;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			small=a[i];
			pos=i;
			if(a[j]<small)
			{
				small=a[j];
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				pos=j;
			}
		}
	}
	printf("sorted array=\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
