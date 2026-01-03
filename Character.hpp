#ifndef CHARACTER_H
#define CHARACTER_H
#include "Environtment.hpp"
#include "Bomb.hpp"

class Character {
    protected:
    int left, top, right, bottom;
    public:
    Character(int _left = 0, int _top = 0, int _right = 0, int _bottom = 0);
    virtual int getLeft() const;
	virtual int getTop() const;
	virtual int getRight() const;
    virtual int getBottom() const;

    virtual void setLeft(int _left);
	virtual void setTop(int _top);
	virtual void setRight(int _right);
    virtual void setBottom(int _bottom);

    virtual void draw() = 0;
    virtual void undraw();
    virtual void move(int dx, int dy) = 0;
    virtual void colission() = 0;
};

#endif