#include <stdio.h>
#include<stdlib.h>

void dfs(int v, int reach[], int *tab[], int vert)
{
    int i;
    reach[v]=1;
    for(i=0;i<vert;i++)
    {
        if(tab[v][i]&&!reach[i])
        {
            dfs(i, reach, tab, vert);
        }
    }
}
int main()
{
    //wczytaj wymiary
    int vert,edge, i, j, e1, e2, count=0;
    printf("number of verticles: ");
    scanf("%d",&vert);
  

    int *reach;
    int **tab;
    reach=(int*)malloc((vert+1)*sizeof(int));
    tab=(int**)malloc((vert+1)*sizeof(int *)); //alokacja pamieci
    for( i=0; i<vert; i++)
    {
        tab[i]=(int*)malloc((vert+1)*sizeof(int));
       // printf("ok\n");
    }
printf("enter the adjecency matrix");
    for(i=0;i<vert;i++)
    {
        reach[i]=0;
        for(j=0;j<vert;j++)
        {
            scanf("%d",&tab[i][j]);
        }
    }
   
    dfs(1, reach, tab, vert);
   // printf("\n");

    for(i=0;i<vert;i++)
    {
        if(reach[i])
            count++;
        printf("count: %d", count);
    }
    if(count==vert)
        printf("graph have cycle");
    else
        printf("graph doesn't have cycle");
return 0;

	
}