#include <stdio.h> 
  
int findPivot(int[], int, int); 
int binarySearch(int[], int, int, int); 
  
/* Searches an element key in a pivoted sorted array arrp[] 
   of size n */
int pivotedBinarySearch(int arr[], int n, int key) 
{ 
   int pivot = findPivot(arr, 0, n-1); 
  
   // If we didn't find a pivot, then array is not rotated at all 
   if (pivot == -1) 
       return binarySearch(arr, 0, n-1, key); 
  
   // If we found a pivot, then first compare with pivot and then 
   // search in two subarrays around pivot 
   if (arr[pivot] == key) 
       return pivot; 
   if (arr[0] <= key) 
       return binarySearch(arr, 0, pivot-1, key); 
   return binarySearch(arr, pivot+1, n-1, key); 
} 
  
/* Function to get pivot. For array 3, 4, 5, 6, 1, 2 it returns 
   3 (index of 6) */
int findPivot(int arr[], int low, int high) 
{ 
   // base cases 
   if (high < low)  return -1; 
   if (high == low) return low; 
  
   int mid = (low + high)/2;   /*low + (high - low)/2;*/
   if (mid < high && arr[mid] > arr[mid + 1]) 
       return mid; 
   if (mid > low && arr[mid] < arr[mid - 1]) 
       return (mid-1); 
   if (arr[low] >= arr[mid]) 
       return findPivot(arr, low, mid-1); 
   return findPivot(arr, mid + 1, high); 
} 
  
/* Standard Binary Search function*/
int binarySearch(int arr[], int low, int high, int key) 
{ 
   if (high < low) 
       return -1; 
   int mid = (low + high)/2;  /*low + (high - low)/2;*/
   if (key == arr[mid]) 
       return mid; 
   if (key > arr[mid]) 
       return binarySearch(arr, (mid + 1), high, key); 
   return binarySearch(arr, low, (mid -1), key); 
} 
  
/* Driver program to check above functions */
int main() 
{ 
   // Let us search 3 in below array 
   int arr1[] = {5, 6, 7, 8, 9, 10, 1, 2, 3}; 
   int n = sizeof(arr1)/sizeof(arr1[0]); 
   int key = 3; 
   printf("Index of the element is : %d", 
        pivotedBinarySearch(arr1, n, key)); 
   return 0; 
} 














#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#define max 20 Int pos;
Int binsearch (int,int[],int,int,int);
Int linsearch (int,int[],int);
void main()
{ Int ch=1; double t; int n,i,a [max],k,op,low,high,pos; clock_tbegin,end;
clrscr();
while(ch)
{
printf("\n.......MENU.......\n 1.BinarySearch \n 2.Linear search \n 3.Exit \n");
printf("\n enter your choice\n");
scanf("%d",&op);
switch(op)
{
case 1:printf("\n enter the number of elments\n"); scanf("%d",&n);
printf("\n enter the number of an array in the order \n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\n enter the elements to be searched \n");
scanf("%d",&k); low=0;high=n-1; begin=clock();
pos=binsearch(n,a,k,low,high);
end=clock();
if(pos==-1)
printf("\n\nUnsuccessful search");
else
printf("\n element %d is found at position %d",k,pos+1);
printf("\n Time Taken is %lf CPU1 cycles \n",(end-begin)/CLK_TCK);
getch();
break;
case 2:printf("\n enter the number of elements \n");
scanf("%d",&n);
printf("\n enter the elements of an array\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\n enter the element to be searched \n");
scanf("%d",&k);
begin=clock();
pos=linsearch(n,a,k);
end=clock();
if(pos==-1)
printf("\n\n Unsuccessful search");
else
printf("element %d is found at position %d",k,pos+1);
printf("\n Time taken is %lf CPU cycles \n",(end-begin)/CLK_TCK); getch();
break;
default:printf("Invalid choice entered \n");
exit(0);
}
printf("\n Do you wish to run again(1/0) \n");
scanf("%d",&ch);
}
getch();
}
intbinsearch(intn,int a[],intk,intlow,int high)
{
int mid;
delay(1000);
mid=(low+high)/2;
if(low>high)
return -1;
if(k==a[mid])
return(mid);
else
if(k<a[mid])
returnbinsearch(n,a,k,low,mid-1);
else
returnbinsearch(n,a,k,mid+1,high);
}
intlinsearch(intn,int a[],int k)
{
delay(1000); if(n<0) return -1;
if(k==a[n-1])
return (n-1);
else
returnlinsearch(n-1,a,k);
}
   int mid = (low + high)/2;   /*low + (high - low)/2;*/
   if (mid < high && arr[mid] > arr[mid + 1]) 
       return mid; 
   if (mid > low && arr[mid] < arr[mid - 1]) 
       return (mid-1); 
   if (arr[low] >= arr[mid]) 
       return findPivot(arr, low, mid-1); 
   return findPivot(arr, mid + 1, high); 
} 
  
/* Standard Binary Search function*/
int binarySearch(int arr[], int low, int high, int key) 
{ 
   if (high < low) 
       return -1; 
   int mid = (low + high)/2;  /*low + (high - low)/2;*/
   if (key == arr[mid]) 
       return mid; 
   if (key > arr[mid]) 
       return binarySearch(arr, (mid + 1), high, key); 
   return binarySearch(arr, low, (mid -1), key); 
} 
  
/* Driver program to check above functions */
int main() 
{ 
   // Let us search 3 in below array 
   int arr1[] = {5, 6, 7, 8, 9, 10, 1, 2, 3}; 
   int n = sizeof(arr1)/sizeof(arr1[0]); 
   int key = 3; 
   printf("Index of the element is : %d", 
        pivotedBinarySearch(arr1, n, key)); 
   return 0; 
} 