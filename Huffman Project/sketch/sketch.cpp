#include "CodeTree.h"

int main(int argc, char const *argv[])
{
    
    char arr[] = {'b', 'o', 'o', 'k'};
    int n = sizeof(arr) / sizeof(arr[0]);
 
    std::vector<char> vect(arr, arr + n);

    std::unordered_map<char, unsigned int> dict;

    std::unordered_map<char, unsigned int>::iterator itr; 

    dict.insert(std::pair<char, unsigned int>('b',1));
    std::cout << dict.size();

    if (dict.find('b') != dict.end()) {
        dict.find('b')->second++;
    }

    std::cout << "\nThe map dict is : \n"; 
    std::cout << "\tKEY\tELEMENT\n"; 
    for (itr = dict.begin(); itr != dict.end(); ++itr) { 
        std::cout << '\t' << itr->first 
             << '\t' << itr->second << '\n'; 
    } 
    std::cout << std::endl;



    return 0;
}
