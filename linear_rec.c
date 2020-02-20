
#include<stdio.h> 
int recSearch(int a[], int l, int x) ;
int recSearch(int a[], int l, int x) 
{ 
  
	if (a[l]!=x) 
        	return -1; 
     	if (a[l] == x) 
        	return l;  
     	return recSearch(a, l+1,  x); 
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
    	int index = recSearch(a, 0, key); 
    	if (index != -1) 
      	 printf("Element %d is present at index %d", key, index); 
   	 else
       	 printf("Element %d is not present", key); 
    	return 0; 
} 

