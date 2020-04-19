/* Write a program for the following: The Longest Increasing Subsequence (LIS) problem is to find the length of the longest subsequence of a given sequence such that all elements of the subsequence are sorted in increasing order. */

#include<stdio.h>


int lis( int arr[], int n )  
{  
	int lis[n],lisn[n],i; 
		   
	lis[0] = 1;    
		  
	for ( i = 1; i < n; i++ )  
	{ 
		lis[i] = 1; 
		for (int j = 0; j < i; j++ )   
			if ( arr[i] > arr[j] && lis[i] < lis[j] + 1)  
				lis[i] = lis[j] + 1;  
	} 
	 int max1 = lis[0]; 
    for (i = 1; i < n; i++) 
        if (lis[i] > max1) 
            max1 = lis[i]; 
    for (i = 0; i < n; i++)
    {
        lisn[i]=n+lis[i];
    }
    int max2 = lisn[0]; 
    for (i = 1; i < n; i++) 
        if (lisn[i] > max2) 
            max2 = lisn[i]; 
	return  (max1 < max2 ) ? max1 : max2;
}  

int main()  
{  
	int n;
	printf("Enter the size of the array=");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements of the array=");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("The length of the longest subsequence of the given sequence is :%d ",lis(a,n));
	
	return 0;

    
}

/*
output:
Enter the size of the array=5                                                      
Enter the elements of the array=3 10 2 1 20                                        
The length of the longest subsequence of the given sequence is :3  
*/