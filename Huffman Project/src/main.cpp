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



    // itr_node_vec = node_vector.begin();
    std::cout << "\n\nLink4: " << node_vector[0]->weight_;
    std::cout << "\n\nNó C: " << node_vector[0]->GetLeftNode()->GetSymbol();
    std::cout << "\n\nLink2: " << node_vector[0]->GetRightNode()->weight_;
    std::cout << "\n\nNó K: " << node_vector[0]->GetRightNode()->GetLeftNode()->GetSymbol();
    std::cout << "\n\nNó B: " << node_vector[0]->GetRightNode()->GetRightNode()->GetSymbol() << "\n";
    // for (itr_node_vec = node_vector.begin(); itr_node_vec != node_vector.end();
    // ++itr_node_vec) {
    //     std::cout << "\nSymbol: " << itr_node_vec->GetSymbol() << "\t Weight: "
    //     << itr_node_vec->weight_;
    // }

    CodeTree *aux_tree = new CodeTree(node_vector[0]);
    aux_tree->PrintTree();

    return 0;
}
