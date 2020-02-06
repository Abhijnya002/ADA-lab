#include<stdio.h>
#include<stdlib.h>

int main() {
	int n,i,a[100],key,low,high,mid,first,last,flag=1,ele,index;
	printf("Enter the no of elements= ");
	scanf("%d",&n);
	printf("Enter array elements=\n ");
	for(i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	printf("Enter key= ");
	scanf("%d",&key);
	low = 0;
	high = n-1;
	while(low<=high) {
		mid = (low+high)/2;
		index = mid;
		first = mid;
		if(a[mid]==key) {
			if(a[mid-1]==key) {
				mid--;
				while(a[mid]==key) {
					mid--;
				}
				if(mid<index) {
					first = mid+1;
				}
			else {
				first = mid;
			 }
			}
			
			mid = index;
			last = mid;
			if(a[mid+1]==key) {
				mid++;
				while(a[mid]==key) {
					mid++;
				}
				if(mid>index) {
					last = mid-1;
				}
			else {
				last = mid;
			 }
			}
			flag=0;
			break;
		}
	else if(a[mid]>key) {
			high = mid-1;
		}
	else if(a[mid]<key) {
			low = mid+1;
		}
	}
	
	if(flag==0) {
		printf("first time key occured at = %d\nlast time key occured at= %d\ncount is %d\n",first,last,(last-first+1));
	}
else {
	printf("Invalid\n");
}
	
	return 0;
}
	




output:
Enter the no of elements= 5
Enter array elements=
 1
1
1
2
2
Enter key= 1
first time key occured at = 0
last time key occured at= 2
count is 3


