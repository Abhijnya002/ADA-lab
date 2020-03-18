#include <stdio.h> 
  

int min(int x, int y, int z) 
{ 
    if(x<y&&x<z)
	return x;
   else
	 if(y<x&&y<z)
	return y;
   else
	return z;
	
} 
  
int editDist(char str1[], char str2[], int m, int n) 
{ 
  
    if (m == 0) 
        return n;  
    if (n == 0) 
        return m; 
  
    if (str1[m - 1] == str2[n - 1]) 
        return editDist(str1, str2, m - 1, n - 1); 
  
    return 1 + min(editDist(str1, str2, m, n - 1), 
                   editDist(str1, str2, m - 1, n),
                   editDist(str1, str2, m - 1, n - 1) 
                   ); 
}  
int main() 
{ 
    	 int m,n,editd;
   	 printf("enter length of 2 strings\n");
	 scanf("%d%d",&m,&n);
	 char str1[m],str2[n];
 	 printf("enter two strings");
	 scanf("%s",str1);
	 scanf("%s",str2);
	 editd=editDist(str1, str2,m, n); 
  	 printf("%d",editd);
   	 return 0; 
} 