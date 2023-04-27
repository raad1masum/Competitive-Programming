class Solution(object):
    def canConstruct(self, ransomNote, magazine):
        """
        :type ransomNote: str
        :type magazine: str
        :rtype: bool
        """
        
        check = ""

        for i in range(len(ransomNote)):
            for j in range(len(magazine)):
                if ransomNote[i] == magazine[j]:
                    check = check + magazine[j]
                    magazine = magazine.replace(magazine[j], '', 1)
                    break

        if check == ransomNote:
            return True
        else:
            return False
