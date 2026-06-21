class StockSpanner(object):

    def __init__(self):
        self.stack = []

    def next(self, price):
        """
        :type price: int
        :rtype: int
        """
        if len(self.stack) == 0:
            self.stack.append([price, 1])
            return 1
        if price < self.stack[-1][0]:
            self.stack.append([price, 1])
            return 1
        span = 1
        while price >= self.stack[-1][0]:
            span += self.stack.pop()[1]
            if len(self.stack) == 0: break
        self.stack.append([price, span])
        return span