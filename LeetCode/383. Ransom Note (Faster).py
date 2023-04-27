class Solution(object):
    def canConstruct(self, ransomNote, magazine):
        """
        :type ransomNote: str
        :type magazine: str
        :rtype: bool
        """
        
        for i in range(len(ransomNote)):
            if magazine.count(ransomNote[i]) < ransomNote.count(ransomNote[i]):
                return False
        return True
