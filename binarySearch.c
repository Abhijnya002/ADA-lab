#include<stdio.h>

int main()
{
	int a[100],n,key,l=-1,f=-1;
	printf("Enter the no.of elements and the key=");
	scanf("%d%d",&n,&key);
	printf("Enter the sorted elements of the array=\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	while(f<=l)
	{
		
		int mid=(f+l)/2;
		if(a[mid]==key)
		{
			f=mid;
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

	while(f<=l)
	{
		
		int mid=(f+l)/2;
		if(a[mid]==key)
		{
			l=mid;
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
	if(f!=-1 && l!=-1 )
	{
		printf("First occurrence = %d\n",f);
		printf("Last occurrence = %d\n",l);
		printf("Count =%d ",(l-f+1));
	}
	else
	{
		printf("-1");
	}
	return 0;

}
