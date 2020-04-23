

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
