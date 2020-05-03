#include <stdio.h> 

int arr[20][20];
int ptr[501]; 

void findSmallestRange(int arr[][20], int n, int k) 
{ 
	int i, minval, maxval, minrange, minel, maxel, flag, minind; 

	for (i = 0; i <= k; i++) 
		ptr[i] = 0; 

	minrange = 999999; 

	while (1) { 
		minind = -1; 
		minval = 999999; 
		maxval = -999999; 
		flag = 0; 

		for (i = 0; i < k; i++) { 
			if (ptr[i] == n) { 
				flag = 1; 
				break; 
			} 
			if (ptr[i] < n && arr[i][ptr[i]] < minval) { 
				minind = i; 
				minval = arr[i][ptr[i]]; 
			} 
			if (ptr[i] < n && arr[i][ptr[i]] > maxval) { 
				maxval = arr[i][ptr[i]]; 
			} 
		} 

		if (flag) 
			break; 

		ptr[minind]++; 

		if ((maxval - minval) < minrange) { 
			minel = minval; 
			maxel = maxval; 
			minrange = maxel - minel; 
		} 
	} 

	printf("The smallest range is [ %d \t %d]",minel, maxel); 
} 

int main() 
{ 
	int k,n;
	printf("Enter the no. of lists: ");
	scanf("%d",&k);
  	printf("Enter the size of each list: ");
	scanf("%d",&n);
	printf("Enter the elements of the k lists");
	for(int i=0;i<k;i++)
	{
		for(int j=0;j<n;j++)
			scanf("%d",&arr[i][j]);
	}

  
    	findSmallestRange(arr, n, k); 
  
    return 0; 
} 