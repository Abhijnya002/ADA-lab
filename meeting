
#include<stdio.h>

void sort(int a[],int b[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		int bele=b[i];
		int small=a[i];
		int pos=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<small)
			{
				bele=b[j];
				small=a[j];
				pos=j;
			}
		}
		int temp=a[i];
		a[i]=a[pos];
		a[pos]=temp;
		int tempb=b[i];
		b[i]=b[pos];
		b[pos]=tempb;
	}
}
int main()
{
	int n;
	printf("Enter the total no of meetings");
	scanf("%d",&n);
	int s[n],f[n],resst[n],resf[n],mnum[n];
	printf("Enter the start times of the meetings");
	for(int i=0;i<n;i++)
		scanf("%d",&s[i]);
	printf("Enter the finish times of the meetings");
	for(int i=0;i<n;i++)
		scanf("%d",&f[i]);
	sort(f,s,n);
	resst[0]=s[0];
	resf[0]=f[0];
	int kf=0;
	int ks=0;
	mnum[0]=1;
	for(int i=1;i<n;i++)
	{
		if(s[i]>resf[kf])
		{
			resst[++ks]=s[i];
			resf[++kf]=f[i];
			mnum[ks]=i+1;
		}
	}
	printf("Maximum no. of meetings :%d ",ks+1);
	printf("Meeting numbers are : ");
	for(int i=0;i<=ks;i++)
		printf("%d\n ",mnum[i]);
	for(int i=0;i<=ks;i++)
	{
		printf("%d%d\n",resst[i],resf[i]);
	}
	return 0;
}
