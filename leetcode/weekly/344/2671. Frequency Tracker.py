# https://leetcode.com/contest/weekly-contest-344/problems/frequency-tracker/

from collections import defaultdict

class FrequencyTracker(object):

    def __init__(self):
        self.frequency = defaultdict(int)
        self.number = defaultdict(int)

    def add(self, number):
        """
        :type number: int
        :rtype: None
        """
        
        if self.frequency[self.number[number]] > 0:
            self.frequency[self.number[number]] -= 1
        
        self.number[number] += 1
        self.frequency[self.number[number]] += 1

        return None
        
    def deleteOne(self, number):
        """
        :type number: int
        :rtype: None
        """

        if self.number[number] > 0:
            self.frequency[self.number[number]] -= 1
            self.number[number] -= 1
            self.frequency[self.number[number]] += 1
        

    def hasFrequency(self, frequency):
        """
        :type frequency: int
        :rtype: bool
        """

        return self.frequency[frequency] > 0