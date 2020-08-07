#include <stdio.h>

int find_min(int a,int b, int c)
{
    if(a<b && a<c)
    return a;
    else if(c<b && c<a)
    return c;
    else
    return b;
}

int main()
{
    int m,n;
    scanf("%d %d", &n,&m);
    int arr[n][m];
    int cost[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    
    cost[n][m] = arr[0][0];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i==0 || j==0)
            {
                if(i==0 && j!=0)
                {
                    cost[i][j] = cost[i][j-1]+arr[i][j];
                }
                
                else if(i!=0 && j==0)
                {
                    cost[i][j] = cost[i-1][j]+arr[i][j];
                }
            }
            
            else
            { 
              cost[i][j] == find_min(cost[i-1][j],cost[i-1][j-1],cost[i][j-1]);  
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d",cost[i][j]);
        }
    }
    return 0;
}
