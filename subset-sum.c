#include <stdio.h>

int main(void) {
    
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int sum,k;
    scanf("%d",&sum);
    int dp[n+1][sum+1];
    for(int i=0 ; i<=n;i++)
    {
        for(int j=0;j<=sum;j++)
        {
            if(i==0 && j!=0)
                dp[i][j] = 0;
            
            else if(j==0)
                dp[i][j] = 1;
            
            else if(arr[i-1] > j)
            {
                dp[i][j] = dp[i-1][j];
            }
            
            else
            {
                k = j - arr[i-1];
                dp[i][j] = (dp[i-1][j] || dp[i-1][k]) ;
                
            }
        }
    }
    
    for(int i=0;i<=n;i++)
    {
        printf("\n");
        for(int j=0;j<=sum;j++)
        {
            printf("%d ", dp[i][j]);
        }
    }
    
    if(dp[n][sum] == 1)
     printf("sum found");
	return 0;
}
