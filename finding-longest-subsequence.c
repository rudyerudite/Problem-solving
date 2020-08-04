#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int findmax(int a, int b)
{
    if(a>=b)
        return a;
    else
        return b;
}

int main() {

    char string_[1000];
    int dim =0,i=0,j=0,k=1;
    scanf("%s",string_);
    dim = strlen(string_);
    //printf("%d",dim);
    int matrix[dim][dim];
    for(i=0; i<dim ; i++)
    {
        for(j=0;j<dim;j++)
        {
            if(i==j)
            {
                matrix[i][j] = 1;
            }
            
            else
                matrix[i][j] = 0;
        }
    }
    
while(k<dim) 
{
   i = 0;
   j = i + k;
   while(j!=dim)
        {   
            if(string_[i] == string_[j])
            {
                matrix[i][j] = 2 + matrix[i+1][j-1];
                //printf("%d,%d --> %d\n",i,j,matrix[i][j]);
            }
            
            else
            {
                matrix[i][j] = findmax(matrix[i+1][j],matrix[i][j-1]);
                //printf("%d,%d --> %d\n",i,j,matrix[i][j]);
            }
       
            j++;i++;
        }
    k++;
}
        
    
    
    printf("%d",matrix[0][dim-1]);
    return 0;
}
