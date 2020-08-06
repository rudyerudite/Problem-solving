#include <stdio.h>
#include <limits.h>
int main() {
   int n;
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++)
   {
       scanf("%d", &arr[i]);
   }
   
   int max_so_far = arr[0];
   int max_ending = arr[0];
   int max;
   
   for(int i=0;i<n;i++)
   {
       max_ending =  ((max_ending+arr[i])>arr[i])?(max_ending+arr[i]):arr[i];
       if(max_so_far<max_ending)
            max_so_far = max_ending;
        else
            continue;
       
   }
   
   printf("%d",max_so_far);
   return 0;
}
