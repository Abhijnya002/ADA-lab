#include<stdio.h> 
float median(int a[], int n) ;
float findMedian(int a1[], int a2[], int n) ;
float median(int a[], int n) 
{ 
    if (n % 2 == 0) 
        return (float)(a[n / 2] +  a[(n / 2 )- 1]) / 2; 
    else
        return a[n / 2]; 
} 
 int max(int num1, int num2)
{
    return (num1 > num2 ) ? num1 : num2;
}

int min(int num1, int num2) 
{
    return (num1 > num2 ) ? num2 : num1;
}
  
float findMedian(int a1[], int a2[], int n) 
{ 
   
    	if (n <= 0) 
        	return -1; 
    	if (n == 1) 
        	return (float)(a1[0] + a2[0]) / 2; 
    	if (n == 2) 
        	return (float)(max(a1[0], a2[0]) + min(a1[1], a2[1])) / 2; 
  
    
    	int m1 = median(a1, n);  
    	int m2 = median(a2, n);  
  
    	if (m1 == m2) 
        	return m1; 
  
    
    	if (m1 < m2) 
    	{ 
        	if (n % 2 == 0) 
            		return findMedian(a1 + (n / 2) - 1,  a2, n -( n / 2) + 1); 
        	return findMedian(a1 + (n / 2),  a2, n - (n / 2)); 
    	} 
  
 
    	if (n % 2 == 0) 
        	return findMedian(a2 + (n / 2 )- 1,  a1, n - (n / 2 )+ 1); 
    	return findMedian(a2 + (n / 2),  a1, n -( n / 2)); 
} 
  



int main()
{
	int n;
	printf("Enter size of the arrays");
	scanf("%d",&n);
	int a[n],b[n];
	printf("Enter elements of 1st array");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	printf("Enter the elements of 2nd array");
	for(int i=0;i<n;i++)
		scanf("%d",&b[i]);
	printf("Median =%f ",findMedian(a,b,n));
	return 0;
}