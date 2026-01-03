#include "Monster.hpp"
#include <graphics.h>


Monster::Monster(int _left, int _top, int _right, int _bottom, int _speedx, int _speedy) : Character(_left, _top, _right, _bottom), speedx(_speedx), speedy(_speedy){}

void Monster::draw() {
    readimagefile("monster.jpg", left, top, right, bottom);
}

void Monster::move(int dx, int dy) {
    undraw();
    left += speedx;
    right += speedx;
    top += speedy;
    bottom += speedy;
    if(right >= getmaxwidth())
        speedx = -speedx;
    if(left <= 710) 
        speedx = -speedx;
    if(bottom >= getmaxheight()) 
        speedy = -speedy;
    if(top <= 320) 
        speedy = -speedy;
    draw();
}

void Monster::colission() {
    exit(1);
}


