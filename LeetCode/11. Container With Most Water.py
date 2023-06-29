class Solution(object):
    def maxArea(self, height):
        """
        :type height: List[int]
        :rtype: int
        """

        max_water = 0
        l_index = 0
        r_index = len(height)-1

        l_iter = l_index
        r_iter = r_index

        for i in range(len(height)):
            if abs(l_index - r_index) * min(height[l_index], height[r_index]) > max_water:
                max_water = abs(l_index - r_index) * min(height[l_index], height[r_index])

            if height[l_index] < height[r_index]:
                l_iter += 1
                if height[l_iter] > height[l_index]:
                    l_index = l_iter
                
            elif height[l_index] > height[r_index]:
                r_iter -= 1
                if height[r_iter] > height[r_index]:
                    r_index = r_iter
            
            elif height[l_index] == height[r_index] and l_index != r_index:
                l_iter += 1
                if l_iter < len(height) and height[l_iter] > height[l_index]:
                    l_index = l_iter
        
        print(l_index)
        print(r_index)

        return max_water
