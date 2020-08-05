//inserting in the maximum binary heap, violation if heap[i]>heap[root] and then make a swap

#include <stdio.h>

int main()
{
    int n, i=0,key, start, root, tmp = 0;
    scanf("%d",&n);
    int heap[n];
    
    while(i<n)
    {
        scanf("%d",&key);
        heap[i] = key;
        start = i;
        root = (i-1)/2;
        
        while(heap[start] > heap[root])
        {
            tmp = heap[start];
            heap[start] = heap[root];
            heap[root] = tmp;
            
            start = root;
            root = (start-1)/2;
        }
        
        i++;
    }
    
    for(i=0;i<n;i++)
        printf("%d ",heap[i]);

    return 0;
}
