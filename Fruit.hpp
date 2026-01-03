#ifndef FRUIT_H
#define FRUIT_H
#include "Items.hpp"

class Fruit : public Items
{
    public:
    Fruit(int _left, int _top, int _right, int _bottom);
    ~Fruit();
    void draw();
    void interaction();
};
#endif