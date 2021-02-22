#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

struct tree_node {
    char symbol;
    unsigned freq;

    tree_node *left, *right;
};

struct element {
    unsigned freq;
    char symbol; 
    tree_node *ref;
};

bool compareByFreq(element a, element b){
    return a.freq > b.freq;
}


int main(int argc, char const *argv[])
{
    std::map<char,int> freq;
    std::map<char, int>::iterator it;
    std::vector<element> table;

    
    freq['a'] = 4;
    freq['b'] = 1;
    freq['c'] = 4;
    freq['d'] = 1;
    freq['e'] = 2;
    freq['f'] = 4;
    
    element aux;

    for(it=freq.begin(); it!=freq.end(); ++it){
        std::cout << it->first << " => " << it->second << '\n';

        aux.symbol = it->first;
        aux.freq = it->second;
        aux.ref = NULL;

        table.push_back(aux);
    }

    std::sort(table.begin(), table.end(), compareByFreq);


    
    return 0;
}

//aabaacdceecfcfff