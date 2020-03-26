#include <stdio.h> 
#include<stdlib.h>
  
void merge(int a[], int low, int mid1, int mid2, int high, int dest[])  
{  
	int i = low, j = mid1, k = mid2, l = low;  
  
     
    	while ((i < mid1) && (j < mid2) && (k < high))  
    	{  
        	if(a[i] < a[j]) 
        	{ 
            		if(a[i] < a[k]) 
            		{ 
                		dest[l++] = a[i++]; 
            		} 
            		else
            		{ 
                		dest[l++] = a[k++]; 
            		} 
        	} 
        	else
        	{ 
            		if(a[j] < a[k]) 
            		{ 
                		dest[l++] = a[j++]; 
            		} 
            		else
            		{ 
                		dest[l++] = a[k++]; 
            		} 
        	} 
    	}  
     
    	while ((i < mid1) && (j < mid2))  
    	{  
        	if(a[i] < a[j])  
            		dest[l++] = a[i++]; 
        	else
            		dest[l++] = a[j++]; 
      
    	}  
  
    	while ((j < mid2) && (k < high))  
    	{  
        	if(a[j] <a[k]) 
            		dest[l++] = a[j++]; 
        	else 
            		dest[l++] = a[k++];  
    	}  
    
    	while ((i < mid1) && (k < high))  
    	{  
        	if(a[i] < a[k]) 
            		dest[l++] = a[i++]; 
        	else 
            		dest[l++] = a[k++];   
    	}  
    
    	while (i < mid1)  
    		dest[l++] = a[i++];  
 
    	while (j < mid2)  
        	dest[l++] = a[j++];  
 
    	while (k < high)  
        	dest[l++] = a[k++];  
}  
  
void mergeSort(int a[], int low, int high, int dest[])  
{  
   
    	if (high - low < 2)  
        	return;  
 
    	int mid1 = low + ((high - low) / 3);  
    	int mid2 = low + 2 * ((high - low) / 3) + 1;  
   
    	mergeSort(dest, low, mid1, a);  
    	mergeSort(dest, mid1, mid2, a);  
    	mergeSort(dest, mid2, high, a);  
    	merge(dest, low, mid1, mid2, high, a);  
} 
  
void mergeSort3Way(int a[], int n)  
{  
    
    	if (n == 0)  
        	return;  
  
    	int f[n];  
    	for (int i = 0; i < n; i++)  
        	f[i] = a[i];    
    	mergeSort(f, 0, n, a);  

    	for (int i = 0; i < n; i++)  
        	a[i] = f[i];  
}  
  

int main() 
{ 
    int n;
	printf("Enter the size of the array");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
		a[i]=rand()%n; 
    	mergeSort3Way(a,n); 
    	printf("Sorted array is");
	for(int i=0;i<n;i++)
		printf("%d",a[i]);
    return 0; 
} 

/* output
Enter the size of the array
15
Sorted array is
1
1
1
2
4
5
7
8
8
9
10
10
12
12
13
anusree@anusree:~/Documents/ADA$ ./a.out
Enter the size of the array
6
Sorted array is
1
1
1
3
4
5
anusree@anusree:~/Documents/ADA$ ./a.out
Enter the size of the array
9
Sorted array is
0
1
1
3
5
6
7
7
7
*/
