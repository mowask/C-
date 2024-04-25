#pragma once
#include<iostream>

using namespace std;

class Space
{
private:
    float x, y, z;
public:

    Space(float xP, float yP, float zP) : x{ xP }, y{ yP }, z{ zP } {
    }

    Space() : Space (0,0,0) { }
    

    Space operator +(Space& s) {
        Space temp = Space();
        temp.x = x + s.x;
        temp.y = y + s.y;
        temp.z = z + s.z;
        return temp;
    }

    Space operator -(Space& s) {
        auto temp = Space();
        temp.x = x - s.x;
        temp.y = y - s.y;
        temp.z = z - s.z;
        return temp;
    }

    friend Space operator -(Space& s);

    Space& operator++(); //prefix
    Space operator++(int); //postfix

    void print()
    {
        cout << "(" << x << ", " << y << ", " << z << ")" << endl;
    }
};


