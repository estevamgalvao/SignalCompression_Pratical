#include "CodeTree.h"

bool CompareNodeByWeight (Node *n1, Node *n2) {
    return n1->weight_ > n2->weight_;
}


int main()
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

    std::vector<Node*> node_vector;
    std::vector<Node>::iterator itr_node_vec;

    for (itr_dict = dict.begin()++; itr_dict != dict.end(); ++itr_dict) {
        Node aux_n(itr_dict->first, itr_dict->second);
        node_vector.push_back(new Node(itr_dict->first, itr_dict->second));
    }

    std::sort(node_vector.begin(), node_vector.end(), &CompareNodeByWeight);
    Node *aux_n;
  
    while (node_vector.size() > 1) {

        unsigned int s = node_vector.size();

        Node *n1 = node_vector[s-2];
        Node *n2 = node_vector[s-1];
        // Node *n3 = &n1;
        // Node *n4 = &n2;
        
        node_vector.pop_back();
        node_vector.pop_back();

        aux_n = new Node('\0',
                        n1->weight_ + n2->weight_,
                        n1,
                        n2);

        aux_n->SetLeaf(false);
        node_vector.push_back(aux_n);

        std::sort(node_vector.begin(), node_vector.end(), &CompareNodeByWeight);
    }

    CodeTree *aux_tree = new CodeTree(node_vector[0]);
    aux_tree->PrintTree();

    return 0;
}
