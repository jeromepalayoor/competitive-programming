class MinStack(object):

    def __init__(self):
        self.main = []
        self.min = []
        self.len = 0
        

    def push(self, value):
        """
        :type value: int
        :rtype: None
        """
        self.main.append(value)
        if self.len != 0:
            self.min.append(min(value, self.min[-1]))
        else:
            self.min.append(value)
        self.len += 1
        

    def pop(self):
        """
        :rtype: None
        """
        self.min.pop()
        self.len -= 1
        return self.main.pop()
        

    def top(self):
        """
        :rtype: int
        """
        return self.main[-1]
        

    def getMin(self):
        """
        :rtype: int
        """
        return self.min[-1]