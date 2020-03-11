#include<iostream>
#include<set>
using namespace std;
int arr[30][30];
bool dfs(int vertex, set<int>&visited, int parent,int n) 
{
	visited.insert(vertex);
  	for(int v = 0; v<n; v++) 
	{
        	if(arr[vertex][v]) 
		{
         		if(v == parent)    //if v is the parent not move that direction
            			continue;
         		if(visited.find(v) != visited.end())    //if v is already visited
            			return true;
         		if(dfs(v, visited, vertex,n))
            			return true;
      		}
   	}
   	return false;
}

bool hasCycle(int n) 
{
	set<int>visited;       //visited set
        for(int v = 0; v<n; v++) 
	{
      		if(visited.find(v) != visited.end())    //when visited holds v, jump to next iteration
         		continue;
     		if(dfs(v, visited, -1,n))    //-1 as no parent of starting vertex
		{
         		return true;
      		}
  	}	
   	return false;
}

int main()
{
	bool res;
  	int n;
   	cout<<"Enter the no of vertices"<<endl;
	cin>>n;
	cout<<"Enter the adjacency matrix"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			cin>>arr[i][j];
	}

	
   	res = hasCycle(n);
   	if(res)
      		cout << "The graph has cycle." << endl;
   	else
      		cout << "The graph has no cycle." << endl;
    	return 0;
}
