#include "CodeTree.h"

bool CompareNodeByWeight (Node n1, Node n2) {
    return n1.weight_ > n2.weight_;
}


int main(int argc, char const *argv[])
{
    /*
    char arr[] = {'b', 'o', 'o', 'k'};
    int n = sizeof(arr) / sizeof(arr[0]);
 
    std::vector<char> vect(arr, arr + n);
    std::vector<char>::iterator itr_vec;
    */

    std::unordered_map<char, unsigned int> dict;
    std::unordered_map<char, unsigned int>::iterator itr_dict; 

    // Filling the dictionary
    dict['b'] = 1;
    dict['o'] = 2;
    dict['k'] = 1;

    std::vector<Node> node_vector;
    std::vector<Node>::iterator itr_node_vec;

    for (itr_dict = dict.begin()++; itr_dict != dict.end(); ++itr_dict) {
        Node *aux_n = new Node(itr_dict->first, itr_dict->second);
        node_vector.push_back(*aux_n);
    }

    for (itr_node_vec = node_vector.begin(); itr_node_vec != node_vector.end();
    ++itr_node_vec) {
        std::cout << "\nSymbol: " << itr_node_vec->GetSymbol() << "\t Weight: "
        << itr_node_vec->weight_;
    }

    std::sort(node_vector.begin(), node_vector.end(), &CompareNodeByWeight);
    std::cout << "\n\nSORTED";
    
    for (itr_node_vec = node_vector.begin(); itr_node_vec != node_vector.end();
    ++itr_node_vec) {
        std::cout << "\nSymbol: " << itr_node_vec->GetSymbol() << "\t Weight: "
        << itr_node_vec->weight_;
    }

    while (node_vector.size() > 1) {
/*         std::vector<Node>::iterator itr1;
        std::vector<Node>::iterator itr2; */
        Node *aux_n;
        unsigned int s = node_vector.size();

        Node *n1 = &node_vector[s-2];
        Node *n2 = &node_vector[s-1];

        aux_n = new Node(NULL,
                        n1->weight_ + n2->weight_,
                        n1,
                        n2);
        aux_n->SetLeaf(false);

        node_vector.pop_back();
        node_vector.pop_back();
        node_vector.push_back(*aux_n);
        std::sort(node_vector.begin(), node_vector.end(), &CompareNodeByWeight);
    }

    itr_node_vec = node_vector.begin();
    std::cout << "Nó: " << itr_node_vec->GetRightNode()->GetSymbol();

    for (itr_node_vec = node_vector.begin(); itr_node_vec != node_vector.end();
    ++itr_node_vec) {
        std::cout << "\nSymbol: " << itr_node_vec->GetSymbol() << "\t Weight: "
        << itr_node_vec->weight_;
    }

    return 0;
}
