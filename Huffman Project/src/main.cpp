#include "CodeTree.h"

bool CompareNodeByWeight (Node *n1, Node *n2) {
    return n1->weight_ < n2->weight_;
}


int main(int argc, char const *argv[])
{
    
    char arr[] = {'b', 'o', 'o', 'k'};
    int n = sizeof(arr) / sizeof(arr[0]);
 
    std::vector<char> vect(arr, arr + n);
    std::vector<char>::iterator itr_vec;

    std::unordered_map<char, unsigned int> dict;
    std::unordered_map<char, unsigned int>::iterator itr_dict; 

    dict['b'] = 1;
    dict['o'] = 2;
    dict['k'] = 1;

    std::vector<Node> node_vector;
    std::vector<Node>::iterator itr_node_vec;

    itr_dict = dict.begin();


    Node *aux_n;

    for (itr_dict = dict.begin()++; itr_dict != dict.end(); ++itr_dict) {
        aux_n = new Node(itr_dict->first, itr_dict->second);
        node_vector.push_back(*aux_n);
    }

    for (itr_node_vec = node_vector.begin(); itr_node_vec != node_vector.end();
    ++itr_node_vec) {
        std::cout << "\nSymbol: " << itr_node_vec->GetSymbol() << "\t Weight: "
        << itr_node_vec->weight_;
    }

    std::cout << "End";

    return 0;
}
