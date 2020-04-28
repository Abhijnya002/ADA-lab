



/* Implement “Sum of Subsets” using Backtracking. “Sum of Subsets” problem: Find a subset of a given set S = {s1,s2,……,sn} of n positive integers whose sum is equal
to a given positive integer d. For example, if S = {1,2,5,6,8} and d = 9 there are two solutions {1,2,6} and {1,8}. A suitable message is to be displayed if the given problem instance doesn’t have a solution.*/

#include <stdio.h>
 #include <stdbool.h> 
int stk[100];
bool hasSolution;
int temp[110];
int top = -1;            
int top1 = -1; 
int MAXSIZE=9999;
int isempty() {

   if(top == -1)
      return 1;
   else
      return 0;
}
   int isempty1() {

   if(top1 == -1)
      return 1;
   else
      return 0;
}
int isfull() {

   if(top == MAXSIZE)
      return 1;
   else
      return 0;
}

int peek() {
   return stk[top];
}
int peek_t() {
   return temp[top1];
}

void pop()
{
   int data;
	
   if(!isempty()) 
   {
      data = stk[top];
      top = top - 1;   
      
   } 
   else 
   {
      printf("Could not retrieve data, Stack is empty.\n");
   }
}
void pop_t()
{
   int data;
	
   if(!isempty1()) 
   {
      data = temp[top1];
      top1= top1 - 1;   
      
   } 
   else 
   {
      printf("Could not retrieve data, Stack is empty.\n");
   }
}
void push(int data) {

   if(!isfull()) {
      top = top + 1;   
      stk[top] = data;
   } else {
      printf("Could not insert data, Stack is full.\n");
   }
}
void push_t(int data) {

   if(!isfull()) {
      top1 = top1 + 1;   
      temp[top1] = data;
   } else {
      printf("Could not insert data, Stack is full.\n");
   }
}
void displaySolutionSet()
{
      
        
      
        while (!isempty()) 
        { 
            printf("%d\n" , peek() );
            push_t(peek());
           pop();
        } 
        printf("\n");
        
        while (!isempty1()) 
        { 
            push(peek_t()); 
            pop_t();
        } 
}
  
bool solve(int s, int idx, int set[],int n,int sum)
{
    if(s>sum)
        return false;
 
    //check if stack has the right subsets of numbers
    if(s==sum){
        hasSolution = true;
        //display stack contents
        displaySolutionSet();
        //Though found a solution but deliberately 
        //returning false to find more
        return false;
    }
        
 
    for(int i=idx; i<n; i++){
        
        push(set[i]);
 
        //add set[i] to the 's' and recusively start from next number
        if(solve(s+set[i],i+1,set,n,sum)){
            return true;
        }
 
        //found false
        //Removing element from stack i.e Backtracking
        pop();
    }
    
    
    return false;
  }
  
  
    

 
int main()
{
	int n;
  	printf("Enter number of elements:");
  	scanf("%d",&n);
  	int set[n];
  	int sum;
  	printf("Enter the sum: ");
  	scanf("%d",&sum);
  	printf("Enter the elements of the set:\n");
  	for(int i=0;i<n;i++)
    		scanf("%d",&set[i]);
 
    
    	solve(0,0,set,n,sum);
	    
	if(hasSolution == false)
	   printf( "No Solution");
 
    return 0;
}
