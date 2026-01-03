#include<graphics.h>
#include "Items.hpp"


Items::Items(int _left, int _top, int _right, int _bottom)
     {
        left = _left;
        top = _top;
        right = _right;
        bottom = _bottom;
    }

	int Items::getLeft() const {return left;}  
	int Items::getTop() const {return top;}
	int Items::getRight() const {return right;}
	int Items::getBottom() const {return bottom;}

    void Items::setLeft(int _left) {_left = left;}
	void Items::setTop(int _top) {_top = top;}
	void Items::setRight(int _right) {_right = right;}
	void Items::setBottom(int _bottom) {_bottom = bottom;}

    void Items::undraw() 
    {
        readimagefile("black.jpeg", left, top, right, bottom);
    }