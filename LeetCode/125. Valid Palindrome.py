class Solution(object):
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """

        string = ""
        for char in s:
            if (ord(char) >= ord('a') and ord(char) <= ord('z')):
                string += char
            elif (ord(char) >= ord('0') and ord(char) <= ord('9')):
                string += char
            elif (ord(char) >= ord('A') and ord(char) <= ord('Z')):
                string += chr(ord(char) + 32)
        
        left, right = 0, len(string) - 1

        for i in range(len(string) // 2):
            if string[left] != string[right]:
                return False
            left += 1
            right -= 1
            
        return True
