#include<graphics.h>
#include "Fruit.hpp"

Fruit::Fruit(int _left, int _top, int _right, int _bottom) : Items(_left,_top,_right, _bottom) {}

Fruit::~Fruit() {}
void Fruit::draw() {
		readimagefile("banana.jpg", left, top, right, bottom);
    }

void Fruit::interaction() {
    undraw();
    ~Fruit();
}