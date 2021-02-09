import collections
import math

def entropyCalc(input, order = 1):
    H = 0
    if order == 1:
        freq = collections.Counter(input)
        ocurrences = sum(freq.values())
        
        for key in freq.keys():
            #H = sum(-P(x)*log(P(x)))
            prob = freq[key]/ocurrences
            H += -(prob*math.log2(prob))
        return H


input = input()
if input == '':
    input = [1, 2, 3, 2, 3, 4, 5, 4, 5, 6, 7, 8, 9, 8, 9, 10]
print(entropyCalc(input))