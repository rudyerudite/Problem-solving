// not working properly

// Online C compiler to run C online.
// Write C code in this online editor and run it.

#include <stdio.h>

int max(int a,int b)
{
    return (a>b)?a:b;
}
int main() {
    
    int n,w;
    printf("lololol");
    scanf(" enter num of elm:%d",&n);
    int val[n],wt[n];
    for(int i=0;i<n;i++)
    {
        printf("%d",i);
        scanf("%d %d",&val[i],&wt[i]);
    }
    printf("lololol");
    scanf(" enter wt:%d",&w);
    int dp[n+1][w+1];
    
    for(int i=0;i<=n;i++)
    {
        for(int j=0;i<=n;j++)
        {
            if(i==0 || j==0)
            {
                dp[i][j]=0;
            }
            
            else if(wt[i-1]<=j)
            {
                dp[i][j]=max(dp[i-1][j], dp[i-1][j-wt[i-1]]);
            }
            
            else
            {
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    printf("%d",dp[n][w]);
    return 0;
}
