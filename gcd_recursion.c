#include<stdio.h>
int gcd(int m,int n);
int main()
{
	int m,n,g;
	printf("enter m and n=");
	scanf("%d%d",&m,&n);
	g=gcd(m,n);
	printf("Gcd of %d and %d =%d\n",m,n,g);
	return 0;
}

int gcd(int m,int n)
{
	
	if(n==0)
	return m;
	else
	return gcd(n,m%n);
}
