#include <graphics.h>
#include "HealthBar.hpp"
#include <time.h>

Healthbar::Healthbar(int _left, int _top, int _right, int _bottom, int _color){
    left = _left;
    top = _top;
    right = _right;
    bottom = _bottom;
    color = _color;
}

int Healthbar::getLeft() const {return left;}  
int Healthbar::getTop() const {return top;}
int Healthbar::getRight() const {return right;}
int Healthbar::getBottom() const {return bottom;}
int Healthbar::getColor() const {return color;}

//int Healthbar::getMaxHealth() const {return maxHealth;}
//int Healthbar::getMinHealth() const {return minHealth;}

void Healthbar::setRight(int value) {value = right;}
//void Healthbar::setMaxHealth(int value) {value = maxHealth;}
//void Healthbar::setMinHealth(int value) {value = minHealth;}
void Healthbar::changeHealth() {

    if(right > 800) {
        undraw();
        right -= 20;
        draw();
    }
  
}
void Healthbar::setColor(int value) {value = color;}
void Healthbar::draw() {
        setcolor(color);
        setfillstyle(SOLID_FILL, color);
        rectangle(left, top, right, bottom);
}

void Healthbar::undraw(){
        setcolor(BLACK);
        setfillstyle(SOLID_FILL, color);
        rectangle(left, top, right, bottom);
}
