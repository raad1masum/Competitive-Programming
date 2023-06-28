class Solution(object):
    def compress(self, chars):
        """
        :type chars: List[str]
        :rtype: int
        """

        i = 0
        length = 0
        while i < len(chars):
            group_length = 1
            while i + group_length < len(chars) and chars[i+group_length] == chars[i]:
                group_length += 1

            chars[length] = chars[i]
            length += 1

            if group_length > 1:
                s = str(group_length)
                chars[length:length+len(s)] = list(s)
                length += len(s)
            
            i += group_length

        return length
