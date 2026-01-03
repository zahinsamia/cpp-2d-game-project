#include "Character.hpp"
#include <graphics.h>

Character::Character(int _left, int _top, int _right, int _bottom) : left(_left), top(_top), right(_right), bottom(_bottom) {}

int Character::getLeft() const {
    return left;
}

int Character::getTop() const {
    return top;
}

int Character::getRight() const {
    return right;
}

int Character::getBottom() const {
    return bottom;
}

void Character::setLeft(int _left) {
    left = _left;
}

void Character::setTop(int _top) {
    top = _top;
}

void Character::setRight(int _right) {
    right = _right;
}

void Character::setBottom(int _bottom) {
    bottom = _bottom;
}

void Character::undraw() {
    readimagefile("black.jpeg", left, top, right, bottom);
}