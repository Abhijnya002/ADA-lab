
//Implement Johnson Trotter algorithm to generate permutations.

#include<stdio.h>


int search(int a[],int n,int mobile)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]==mobile)
			return i+1;
	}
	return -1;
}

int findmobile(int a[], int dir[],int n)
{
	int mobile=0,i;
	int mobile_prev=0;
	for(i=0;i<n;i++)
	{
		if(dir[a[i]-1]==0 && i!=0)
		{
			if(a[i]>a[i-1] && a[i]>mobile_prev)
			{
				mobile=a[i];
				mobile_prev=mobile;
			}
		}
		if(dir[a[i]-1]==1 && i!=n-1)
		{
			if(a[i]>a[i+1] && a[i]>mobile_prev)
			{
				mobile=a[i];
				mobile_prev=mobile;
			}
		}
	}
	if(mobile_prev==0 && mobile==0)
	{
		return 0;
	}
	else
    {
		return mobile;
    }
}

void printperm(int a[],int dir[], int n)
{
	int mobile=findmobile(a,dir,n);

	int pos=search(a,n,mobile);
	if(dir[a[pos-1]-1]==0)
	{
	    int t=a[pos-1];
	    a[pos-1]=a[pos-2];
	    a[pos-2]=t;
	}
	else
	{
	    int t=a[pos-1];
	    a[pos-1]=a[pos];
	    a[pos]=t;
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]>mobile)
		{
			if(dir[a[i]-1]==0)
				dir[a[i]-1]=1;
			else
				dir[a[i]-1]=0;
		}
	}
	for(int i=0;i<n;i++)
		printf("%d\t",a[i]);
	printf("\n");
}
int fact(int n)
{
	int f=1;
	for(int i=2;i<=n;i++)
		f=f*i;
	return f;
}
int main()
{
	int n;
	printf("Enter n value=");
	scanf("%d",&n);
	int dir[n],a[n];
	for(int i=0;i<n;i++)
	{
		dir[i]=0;
		a[i]=i+1;
		printf("%d\t",a[i]);
	}
    printf("\n");
	for(int i=1;i<fact(n);i++)
	{
		printperm(a,dir,n);
	}
	return 0;
}
*/
output:
Enter n value=3                                                                                                    
1       2       3                                                                                                  
1       3       2                                                                                                  
3       1       2                                                                                                  
3       2       1                                                                                                  
2       3       1                                                                                                  
2       1       3 
/*
