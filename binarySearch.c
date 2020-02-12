#include<stdio.h>

int main()
{
	int a[100],n,key,l,f=0,first,last;
	printf("Enter the no.of elements and the key=");
	scanf("%d%d",&n,&key);
	printf("Enter the sorted elements of the array=\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	l=n-1;
	while(f<=l)
	{
		
		int mid=(f+l)/2;
		printf("mid=%d\n",mid);
		if(a[mid]==key)
		{
			first=mid;
			l=mid-1;
		}
		else if(key>a[mid])
		{
			f=mid+1;
		}
		else 
		{
			l=mid-1;
		}
		
	}
	f=0;l=n-1;
	while(f<=l)
	{
		
		int mid=(f+l)/2;
		if(a[mid]==key)
		{
			last=mid;
			f=mid+1;
		}
		else if(key>a[mid])
		{
			f=mid+1;
		}
		else 
		{
			l=mid-1;
		}
		
	}
	if(first!=-1 && last!=-1 )
	{
		printf("First occurrence = %d\n",first);
		printf("Last occurrence = %d\n",last);
		printf("Count =%d ",(last-first+1));
	}
	else
	{
		printf("-1");
	}
	return 0;

}
