#ifndef MONSTER_H
#define MONSTER_H
#include "Character.hpp"

using namespace std;

class Monster : public Character {
    protected:
    int speedx;
    int speedy;
    public:
    Monster(int _left = 0, int top = 0, int _right = 0, int _bottom = 0, int _speedx = 0, int _speedy = 0);

	void draw();
    void move(int dx, int dy);
    void colission();
};

#endif