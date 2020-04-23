

#include <stdio.h>
int minIndex(int a[], int i, int j) 
{ 
    if (i == j) 
        return i; 
    int k = minIndex(a, i + 1, j); 
    return (a[i] < a[k])? i : k; 
} 
void recurSelectionSort(int a[], int n, int index) 
{ 
    
    if (index == n) 
       return; 
    int k = minIndex(a, index, n-1); 
    if (k != index) 
    {
        int temp=a[k];
        a[k]=a[index];
        a[index]=temp;
    }
    recurSelectionSort(a, n, index + 1); 
} 
int main() 
{ 
    int arr[] = {13, 21, 5,12, 4, 40}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    recurSelectionSort(arr, n,0); 
    for (int i = 0; i<n ; i++) 
        printf("%d\n", arr[i] ); 

    return 0; 
} 


/*
i=1k1=4                                                                                                             
i=0k1=4                                                                                                             
k2=4                                                                                                                
i=4k1=5                                                                                                             
i=3k1=4                                                                                                             
i=2k1=3                                                                                                             
i=1k1=2                                                                                                             
k2=2                                                                                                                
i=4k1=5                                                                                                             
i=3k1=4                                                                                                             
i=2k1=3                                                                                                             
k2=3                                                                                                                
i=4k1=5                                                                                                             
i=3k1=4                                                                                                             
k2=4                                                                                                                
i=4k1=5                                                                                                             
k2=4                                                                                                                
k2=5  
/*













#include<stdio.h>

void insertionSortRecursive(int arr[], int n) 
{ 
    
    if (n <= 1) 
        return; 
    insertionSortRecursive( arr, n-1 ); 
    int last = arr[n-1]; 
    int j = n-2; 
    while (j >= 0 && arr[j] > last) 
    { 
        arr[j+1] = arr[j]; 
        j--; 
    } 
    arr[j+1] = last; 
} 
void printArray(int arr[], int n) 
{ 
    for (int i=0; i < n; i++) 
        printf("%d\t", arr[i] ); 
} 

int main() 
{ 
    int arr[] = {12, 11, 13, 5, 6}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
  
    insertionSortRecursive(arr, n); 
    printArray(arr, n); 
  
    return 0; 
} 
