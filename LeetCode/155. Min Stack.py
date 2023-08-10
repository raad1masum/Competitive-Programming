class MinStack(object):

    def __init__(self):
        self.stack = []
        self.minstack = [sys.maxsize]

    def push(self, val):
        """
        :type val: int
        :rtype: None
        """
        self.stack.append(val)
        if val <= self.minstack[-1]:
            self.minstack.append(val)

    def pop(self):
        """
        :rtype: None
        """
        if self.minstack[-1] == self.stack[-1]:
            self.minstack.pop()
        self.stack.pop()

    def top(self):
        """
        :rtype: int
        """
        return self.stack[-1]

    def getMin(self):
        """
        :rtype: int
        """
        return self.minstack[-1]


# Your MinStack object will be instantiated and called as such:
# obj = MinStack()
# obj.push(val)
# obj.pop()
# param_3 = obj.top()
# param_4 = obj.getMin()
