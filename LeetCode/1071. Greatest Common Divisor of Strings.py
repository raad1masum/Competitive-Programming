class Solution(object):
    def gcdOfStrings(self, str1, str2):
        """
        :type str1: str
        :type str2: str
        :rtype: str
        """

        itr = len(str1)
        
        if itr < len(str2):
            itr = len(str2)

        out = ""

        tmp = ""
        for i in range(itr):
            if itr == len(str1):
                tmp += str1[i]
            else:
                tmp += str2[i]

            str1bool = False
            tmp1 = ""
            for j in range(len(str1) / len(tmp)):
                tmp1 += tmp
                if tmp1 == str1:
                    str1bool = True
            
            str2bool = False
            tmp2 = ""
            for j in range(len(str2) / len(tmp)):
                tmp2 += tmp
                if tmp2 == str2:
                    str2bool = True
                
            if str1bool and str2bool:
                out = tmp
                
        return out
