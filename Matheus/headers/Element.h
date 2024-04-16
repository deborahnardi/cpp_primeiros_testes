#pragma once
#include <math.h>

#include "Node.h"

class Element
{
public:
    Element(int id, Node *_n0, Node *_n1)
    {
        index = id;
        n0 = _n0;
        n1 = _n1;
        L = sqrt(pow(n1->getX1() - n0->getX1(), 2) + pow(n1->getX2() - n0->getX2(), 2) + pow(n1->getX3() - n0->getX3(), 2));
    }
    ~Element(){};

    int getIndex() { return index; }
    void setIndex(int id) { index = id; }

    double getL() { return L; }
    void setL(double _L) { L = _L; }

private:
    int index;
    Node *n0;
    Node *n1;
    double L;
};