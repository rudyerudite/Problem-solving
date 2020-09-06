#include <limits.h>

int jump(int* nums, int numsSize){
    
    int jumps[numsSize];
    
    if(numsSize == 0 || nums[0] == 0)
        return 0;
    jumps[0] = 0;
    
    for(int i=1; i<numsSize; i++)
    {
        jumps[i] = INT_MAX;
        
        for(int j=0; j<i;j++) //finding min jumps from 0 to ith index
        {
            if(i <= nums[j]+j && jumps[j]!= INT_MAX) //check whether jth elm < i is reachable to i and is reachable by 0
            {
                if(jumps[i] > jumps[j]+1)
                {
                    jumps[i] = jumps[j]+1;
                }
            }
        }
    }
    
    return jumps[numsSize-1];

}
