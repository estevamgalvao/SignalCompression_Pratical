import collections
import math

def entropyCalc(sequel, order = 1):
    H = 0
    sequel = [(sequel[i:i+order]) for i in range(0, len(sequel), order)]
    #print(sequel)

    freq = collections.Counter(sequel)
    print(freq)
    ocurrences = sum(freq.values())
    
    for key in freq.keys():
        #H = sum(-P(x)*log(P(x)))
        prob = freq[key]/ocurrences
        H += -(prob*math.log2(prob))
    return H


user_input = input("Sequel: ")
order = int(input("Order: "))


if user_input == '':
    user_input = "ATGCTTAAGCTGCTTAACCTGAAGCTTCCGCTGAAGAACCTGCTGAACCCGCTTAAGCTGAACCTTCTGAAGCTTAACCTGCTT"

#print(entropyCalc(user_input, order))
print(entropyCalc(user_input, 1))
print(entropyCalc(user_input, 2))
print(entropyCalc(user_input, 3))
print(entropyCalc(user_input, 4))
