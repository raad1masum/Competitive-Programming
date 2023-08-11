class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        out = 0
        stack = []
        opps = ['+','-','*','/']

        for i in range(len(tokens)):
            if tokens[i] in opps:
                if tokens[i] == opps[0]:
                    push = stack[-2] + stack[-1]
                    stack.pop()
                    stack.pop()
                    stack.append(push)
                if tokens[i] == opps[1]:
                    push = stack[-2] - stack[-1]
                    stack.pop()
                    stack.pop()
                    stack.append(push)
                if tokens[i] == opps[2]:
                    push = stack[-2] * stack[-1]
                    stack.pop()
                    stack.pop()
                    stack.append(push)
                if tokens[i] == opps[3]:
                    push = int(stack[-2] / stack[-1])
                    stack.pop()
                    stack.pop()
                    stack.append(push)
            else:
                stack.append(int(tokens[i]))
        
        return stack[0]
