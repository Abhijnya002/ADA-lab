/* Given a sequence, find the length of the longest palindromic subsequence in it. */
#include<string.h>
#include<stdio.h>
int max(int num1, int num2)
{
    return (num1 > num2 ) ? num1 : num2;
}

int longestSeq(char s[],int i, int j)
{
	if(i==j)
		return 1;
	else if(s[i]==s[j] && i+1==j)
		return 2;
	else if(s[i]==s[j])
		return longestSeq(s,i+1,j-1) +2;
	else
		return max(longestSeq(s,i+1,j), longestSeq(s,i,j-1));
}

int main()
{
	char s[100];
	printf("Enter the sequence=");
	scanf("%s",s);
	printf("The length of the longest palindromic subsequence is : %d",longestSeq(s,0,strlen(s)-1));
	return 0;
}


/* output

Enter the sequence=aabdccsggaa                                                                                                
The length of the longest palindromic subsequence is : 6  
*/