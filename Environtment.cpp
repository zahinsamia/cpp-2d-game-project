#include "Environtment.hpp"
#include <graphics.h>

Environtment::Environtment(int _left, int _top, int _right, int _bottom) {
        left = _left;
        top = _top;
        right = _right;
        bottom = _bottom;
    }

	int Environtment::getLeft() const {return left;}  
	int Environtment::getTop() const {return top;}
	int Environtment::getRight() const {return right;}
	int Environtment::getBottom() const {return bottom;}

	void Environtment::setLeft(int _left) {_left = left;}
	void Environtment::setTop(int _top) {_top = top;}
	void Environtment::setRight(int _right) {_right = right;}
	void Environtment::setBottom(int _bottom) {_bottom = bottom;}

	void Environtment::draw()
	 {
		readimagefile("classicwall.jpg", left, top, right, bottom);
		
    }
	
	
