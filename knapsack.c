/* Implement 0/1 Knapsack problem using dynamic programming.*/

#include<stdio.h>

int max(int num1, int num2)
{
    return (num1 > num2 ) ? num1 : num2;
}
int main()
{
	int n,m;
	printf("Enter the no. of objects and knapsack capacity=");
	scanf("%d%d",&n,&m);
	int w[n+1],p[n+1];
	w[0]=0;
	p[0]=0;
	int k[n+1][m+1];
	printf("enter the weights of the objects");
	for(int i=1;i<=n;i++)
		scanf("%d",&w[i]);
	printf("enter the profit of the objects");
	for(int i=1;i<=n;i++)
		scanf("%d",&p[i]);
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=m;j++)
		{
			if(i==0||j==0)
				k[i][j]=0;
			else if(w[i]<=j)
				k[i][j]=max(p[i]+k[i-1][j-w[i]],k[i-1][j]);
			else
				k[i][j]=k[i-1][j];
		}
	}
	printf("Optimal solution :%d",k[n][m]);
	int i=n;
	int j=m;
	printf("The objects included are represented with ' 1 ' ");
	while(i>0 && j>=0)
	{
		if(k[i][j]==k[i-1][j])
		{
		    printf("%d = 0\n",i);
			i--;
		}
		else
		{
			printf("%d = 1\n",i);
			j=j-w[i];
			i--;
		}
	}
	return 0;
}

/*
op:
Enter the no. of objects and knapsack capacity=4 5                                                                              
enter the weights of the objects                                                                                                
2 1 3 2                                                                                                                         
enter the profit of the objects                                                                                                 
12 15 25 10                                                                                                                     
Optimal solution :40The objects included are represented with ' 1 ' 
4 = 0                                                       
3 = 1                                                                                                                           
2 = 1                                                                                                                           
1 = 0 
*/                                                                                                                          
         