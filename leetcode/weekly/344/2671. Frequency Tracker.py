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
        

# thinking process:
# use two dictionaries, one for frequency, one for keeping track of the numbers
# add a number: add it to the number dictionary, and add 1 to the frequency dictionary
# delete a number: subtract 1 from the frequency dictionary, and subtract 1 from the number dictionary
# check if a frequency exists: check if the frequency dictionary has a value greater than 0 for the frequency
