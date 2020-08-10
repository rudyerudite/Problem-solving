#include <stdio.h>

int find_min(int a, int b, int c)
{
    return ((a<b&&a<c)?a:(b<c?b:c));
}
int main() {
    int n, m;
    int mat[n][m];
    int dp[n][m];
    scanf("%d %d", &n,&m);
    for(int i=0 ;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&mat[i][j]);
            if(i==0 || j==0)
                dp[i][j] = mat[i][j];
            else if(mat[i][j] == 0)
                dp[i][j] = 0;
            else
                dp[i][j] = find_min(dp[i-1][j],dp[i-1][j-1],dp[i][j-1]);
            
        }
    }
    
    for(int i=0;i<n;i++)
    {
        printf("\n");
        for(int j=0;j<m;j++)
        {
            printf("%d",dp[i][j]);
        }
    }
    
    
    return 0;
}
