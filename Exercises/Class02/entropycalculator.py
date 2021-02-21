import collections
import math

def entropyCalc(sequel, order = 1):
    G = 0
    
    # building the list of symbols inside the sequel
    sequel = [(sequel[i:i+order]) for i in range(0, len(sequel), order)]
    
    freq = collections.Counter(sequel)
    ocurrences = sum(freq.values())
    
    # plan to calculate the total of information in this sequel using the
    # following expression:
    # G == sum(-P(x)*log2(P(x)))

    # every key in this collection is a sequel's symbol
    for key in freq.keys():
        prob = freq[key]/ocurrences
        G += -(prob*math.log2(prob))
    return G/order


user_input = input("Sequel: ")
order = int(input("Order: "))

# facilitating debug/tests
if user_input == '':
    user_input = "ATGCTTAAGCTGCTTAACCTGAAGCTTCCGCTGAAGAACCTGCTGAACCCGCTTAAGCTGAACCTTCTGAAGCTTAACCTGCTT"


print("\nH(s): ", entropyCalc(user_input, order))
