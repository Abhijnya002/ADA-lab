//Sort a given set of N integer elements using Bubble Sort technique and compute its time taken. Run the program for different values of N and record the time taken to sort.//


#include<stdio.h>
#include<time.h>
void sort(int a[],int n);
int main()
{
	int a[100],i,j,n,temp,s;
	printf("Enter size=");
	scanf("%d",&n);
	printf("Enter array ele=\n");
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
    	return 0;
}
void sort(int a[],int n)
{
	int i,j;
	for(i=1;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]<a[j])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("sorted array=\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	
}

