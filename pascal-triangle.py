class Solution(object):
    def generate(self, numRows):
        """
        :type numRows: int
        :rtype: List[List[int]]
        """
        if(numRows <=0):
            return []
        num = []
        num.append([])
        num[0].append(1)
        
        count = 2
        i = 1
        while(count<= numRows):
            num.append([])
            for j in range(count):
                if(j-1 >= 0 and j < count-1):
                    num[i].append(num[i-1][j-1] + num[i-1][j])
                else:
                    num[i].append(1)
            count +=1
            i+=1
        return num
