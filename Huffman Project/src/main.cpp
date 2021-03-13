#include "CodeTree.h"

int main(int argc, char const *argv[])
{
    u4 b = 8;
    char c = 'a';
    Node n = Node(c, b);
    Node *p1 = &n;
    Node papai = Node('p', (u4) 10);
    /* code */

    std::cout << n.AmILeaf() << "mas vai toma noc u\n";

    papai.SetLeftNode(p1);

    std::cout << "Valor ponteiro: " << p1 << " || " << "Endereço n: " << &n;
    std::cout << "\n\nLeftNode: " << papai.GetLeftNode();
    std::cout << "\nRightNode: " << papai.GetRightNode();



    return 0;
}
