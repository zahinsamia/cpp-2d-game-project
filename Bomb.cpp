#include "Bomb.hpp"
#include "time.h"
#include <graphics.h>

Bomb::Bomb(int _left, int _top, int _right, int _bottom) {
        left = _left;
        top = _top;
        right = _right;
        bottom = _bottom;
    }

	int Bomb::getLeft() const {return left;}  
	int Bomb::getTop() const {return top;}
	int Bomb::getRight() const {return right;}
	int Bomb::getBottom() const {return bottom;}

    void Bomb::setLeft(int _left) {_left = left;}
	void Bomb::setTop(int _top) {_top = top;}
	void Bomb::setRight(int _right) {_right = right;}
	void Bomb::setBottom(int _bottom) {_bottom = bottom;}

	void Bomb::draw() {
		readimagefile("tsarbomb.jpg", left, top, right, bottom);
    }
    void Bomb::undraw() {
        readimagefile("black.jpeg", left, top, right, bottom);
    }
    void Bomb::explode() {
       readimagefile("exploding.jpg", left, top, right, bottom);
    }   
