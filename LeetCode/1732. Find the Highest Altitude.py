class Solution(object):
    def largestAltitude(self, gain):
        """
        :type gain: List[int]
        :rtype: int
        """

        alt, out = [0], 0

        for i in range(len(gain)):
            out = max(out, alt[i] + gain[i])
            alt.append(alt[i] + gain[i])
        
        return out
