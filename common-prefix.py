#src Leetcode
#Input: ["flower","flow","flight"]
#Output: "fl"

class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        k = strs.sort()
        common = ""
        
        if(len(strs) == 0 or strs[0]==""):
            print(common)
            return common
        elif(len(strs)==1):
            common = strs[0]
            return common
        
        m = strs[0]
        n = strs[len(strs)-1]
        
        for i,j in zip(m,n):
            if(i == j):
                common+=i
            else:
                break
        print(common)
        return common
