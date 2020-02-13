‌
// Write an efficient program for printing k largest elements in an array. Elements in the array can be in any order. It is given that all array elements are distinct.//

#include<stdio.h>
#include<time.h>
void sort(int a[],int n);
void largest(int a[],int n,int k);
void large(int a[],int n,int k);
int main()
{
	int a[100],i,j,n,temp,k;
	printf("Enter size=");
	scanf("%d",&n);
	printf("Enter array ele=\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,n);
	printf("enter k=");
	scanf("%d",&k);
	largest(a,n,k);
	large(a,n,k);
}
void sort(int a[],int n)
{
	int i,j;
	for(i=1;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]>a[j])
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
void largest(int a[],int n,int k)
{
	printf("%dth largest element is=%d\n",k,a[k-1]);
			
}
void large(int a[],int n,int k)
{
	int i;
	printf("%d largest elements are=\n",k);
	for(i=0;i<k;i++)
	{
		printf("%d\n",a[i]);
	}
}


output:
Enter size=5
Enter array ele=
6
7
2
3
4
sorted array=
7
6
4
3
2
enter k=3
3th largest element is=4
3 largest elements are=
7
6
4
