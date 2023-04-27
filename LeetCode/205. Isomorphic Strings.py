class Solution(object):
    def isIsomorphic(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        
        dictionary = dict(zip(s,t))

        clean_dictionary = {}

        for key,value in dictionary.items():
            if value not in clean_dictionary.values():
                clean_dictionary[key] = value
        
        if len(dictionary) != len(clean_dictionary):
            return False

        for i in range(len(s)):
            if dictionary[s[i]] != t[i]:
                return False

        return True
