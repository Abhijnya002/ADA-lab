#include <stdio.h> 
  

void heapify(int arr[], int n, int i) 
{ 
     int temp;
    int largest = i; 
    int l = 2*i + 1; 
    int r = 2*i + 2; 
    if (l < n && arr[l] > arr[largest]) 
        largest = l; 
  
    
    if (r < n && arr[r] > arr[largest]) 
        largest = r; 
  
    
    if (largest != i) 
    { 
        temp=arr[i];
       arr[i]=arr[largest]; 
        arr[largest]=temp;
        heapify(arr, n, largest); 
    } 
} 
 
void heapSort(int arr[], int n) 
{ 
	int t;
    for (int i = n / 2 - 1; i >= 0; i--) 
        heapify(arr, n, i); 
  
    for (int i=n-1; i>0; i--) 
    { 
         
        t=arr[0];
	arr[0]=arr[i]; 
  	arr[i]=t;
        heapify(arr, i, 0); 
    } 
} 

void printArray(int arr[], int n) 
{ 
    for (int i=0; i<n; ++i) 
        printf("%d",arr[i]);   
} 
  
// Driver program 
int main() 
{ 
    
    int n;
    printf("enter size");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements");
    for (int i=0; i<n; ++i) 
        scanf("%d",&arr[i]);
    heapSort(arr, n); 
  
    printf("Sorted array is \n"); 
    printArray(arr, n); 
} 