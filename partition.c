/* Write a program for the partition problem. Partition problem is to determine whether a given set can be partitioned into two subsets such that the sum of elements in both subsets is same. */

#include<stdio.h>


int subsetSum(int arr[], int n, int sum)
{
	if (sum == 0)
		return 1;
	if (n < 0 || sum < 0)
		return 0;
	int include = subsetSum(arr, n - 1, sum - arr[n]);
	if (include)
		return 1;
	int exclude = subsetSum(arr, n - 1, sum);
	return exclude;
}

int main()
{
	int n,sum=0;
	printf("Enter the size of the array=");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements of the array=\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	if(sum%2==0)
	{
		if(subsetSum)
			printf("Can be partitioned into two subsets of equal sum\n");
	}
	else
		printf("Cannot be partitioned into two subsets of equal sum\n");
	return 0;
}

/* output
Enter the size of the array
6
Enter the elements of the array
7 3 1 5 4 8
Can be partitioned into two subsets of equal sum
Enter the size of the array
3
Enter the elements of the array
1 3 5
Cannot be partitioned into two subsets of equal sum
*/
	