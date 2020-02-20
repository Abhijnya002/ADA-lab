#include<stdio.h> 
int recsearch(int a[],int f, int l, int key) ;
int recsearch(int a[], int f,int l, int key) 
{ 
  	
	while(f<=l)
	{
	int mid=(f+l)/2;
	if (a[mid]==key) 
        	return mid; 
     	if (a[mid] > key) 
     	return recsearch(a, f,mid-1,key);
	else
     	return recsearch(a, mid+1,l,key); 
	} 
	return -1;
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
    	int index = recsearch(a, 0,n-1, key); 
    	if (index != -1) 
      	 printf("Element %d is present at index %d", key, index); 
   	 else
       	 printf("Element %d is not present", key); 
    	return 0; 
} 

