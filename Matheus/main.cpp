#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <vector>

#include "headers/Node.h"
#include "headers/Element.h"

std::vector<Node *> nodes;
std::vector<Element *> elements;

int main()
{
    nodes.push_back(new Node(nodes.size(), 0, 0, 0));
    nodes.push_back(new Node(nodes.size(), 1, 0, 0));
    nodes.push_back(new Node(nodes.size(), 0, 1, 0));

    elements.push_back(new Element(elements.size(), nodes[0], nodes[1]));
    elements.push_back(new Element(elements.size(), nodes[1], nodes[2]));
    elements.push_back(new Element(elements.size(), nodes[2], nodes[0]));

    for (Node *n : nodes)
    {
        std::cout << "Node index: (" << n->getX1() << ", " << n->getX2() << ", " << n->getX3() << ")" << std::endl;
    }

    for (Element *e : elements)
    {
        std::cout << "Element index: " << e->getIndex() << " Length: " << e->getL() << std::endl;
    }
    return 0;
}