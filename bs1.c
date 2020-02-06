

/* Problem:
Given an sorted array arr[] of N integers and a number K is given. The task is to check if the element K is present in the array or not.
Input:
First line of input contains number of testcases T. For each testcase, first line of input contains number of elements in the array and the number K separated by space. Next line contains N elements.
Output:
For each testcase, if the element is present in the array print "1" (without quotes), else print "-1" (without quotes).*/

#include<stdio.h>

int binary(int a[],int f, int l, int key)
{
	while(f<=l)
	{
		int mid=(f+l)/2;
		if(a[mid]==key)
		{
			return 1;
		}
		else if(key>a[mid])
		{
			f=mid+1;
		}
		else 
		{
			l=mid-1;
		}
		
	}
	return -1;
}
int main()
{
	int arr[50],res[50];
	int k,n,t,i;
	printf("Enter the no.of testcases=");
	scanf("%d",&t);
	for( i=0;i<t;i++)
	{
		printf("Enter the no.of elements and the key=");
		scanf("%d%d",&n,&k);
		printf("Enter the elements of the array=\n");
		for(int i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
		
		res[i]=binary(arr,0,n-1,k);
	}
	for(int i=0;i<t;i++)
	{
		printf("%d\n",res[i]);
	}
	return 0;
}
