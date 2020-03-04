#include<stdio.h> 

int recSearch(int arr[], int l, int r, int x) ;
int recSearch(int arr[], int l, int r, int x) 
{ 
     if (r < l) 
        return -1; 
     if (arr[l] == x) 
        return l; 
     if (arr[r] == x) 
        return r; 
     return recSearch(arr, l+1, r-1, x); 
} 
   
  
int main() 
{ 
    	int n,key,i;
	printf("enter the number of elements=");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements=\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter key=");
	scanf("%d",&key);
    	int index = recSearch(a, 0, n-1,key); 
    	if (index != -1) 
      	 printf("Element %d is present at index %d", key, index); 
   	 else
       	 printf("Element %d is not present", key); 
    	return 0; 
} 
