#pragma once

class Node {
public:
    Node() {};
    Node(int id, double _x1,double _x2,double _x3) 
    {
        index = id;
        x1 = _x1;
        x2 = _x2;
        x3 = _x3;
    }
    ~Node() {};

    int getIndex() {return index;}
    void setIndex(int id) {index = id;}

    double getX1() {return x1;}
    double getX2() {return x2;}
    double getX3() {return x3;}

    void setX1(double _x1) {x1 = _x1;}
    void setX2(double _x2) {x2 = _x2;}
    void setX3(double _x3) {x3 = _x3;}
    
private:
    int index;
    double x1, x2, x3;
};