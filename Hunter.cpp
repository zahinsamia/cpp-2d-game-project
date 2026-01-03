#include "Hunter.hpp"
#include <graphics.h>
#include <time.h>

Hunter::Hunter(int _left, int _top, int _right, int _bottom, Healthbar *_healthbar, Monster *_monsters1, Monster *_monsters2,  Environtment *_walls1, Environtment *_walls2, Bomb *_bombs1, Bomb *_bombs2) : Character(_left, _top, _right, _bottom), healthbar(_healthbar), monsters1(_monsters1), monsters2(_monsters2), walls1(_walls1), walls2(_walls2), bombs1(_bombs1), bombs2(_bombs2) {}

void Hunter::draw() {
    readimagefile("hunter.png", left, top, right, bottom);
}

void Hunter::move(int dx, int dy) {
    undraw();
    left += dx;
    right += dx;
    top += dy;
    bottom += dy;
    draw();
}


void Hunter::healthStats() {
    if(healthbar != nullptr)
        healthbar->changeHealth();
}

void Hunter::colission() {
    undraw();
        if((getTop() >= monsters1->getTop() && getTop() <= monsters1->getBottom()) || (getBottom() <= monsters1->getBottom() && getBottom() >= monsters1->getTop())) {
            if((getRight() >= monsters1->getLeft()) && (getRight() <= monsters1->getRight())) {
                move(-20,0);
                healthStats();
            }
            if((getLeft() <= monsters1->getRight()) && (getLeft() >= monsters1->getLeft())) {
                move(20, 0);
                healthStats();
            }
        }
        if((getLeft() >= monsters1->getLeft() && getLeft() <= monsters1->getRight()) || (getRight() <= monsters1->getRight() && getRight() >= monsters1->getLeft())) {
            if(getTop() == monsters1->getBottom()) {
                move(0, 20);
                healthStats();
            }
            if(getTop() == monsters1->getTop()) {
                move(0, -20);
                healthStats();
            }
        }
        if((getTop() >= monsters2->getTop() && getTop() <= monsters2->getBottom()) || (getBottom() <= monsters2->getBottom() && getBottom() >= monsters2->getTop())) {
            if((getRight() >= monsters2->getLeft()) && (getRight() <= monsters2->getRight())) {
                move(-20,0);
                healthStats();
            }
            if((getLeft() <= monsters2->getRight()) && (getLeft() >= monsters2->getLeft())) {
                move(20, 0);
                healthStats();
            }
        }
        if((getLeft() >= monsters2->getLeft() && getLeft() <= monsters2->getRight()) || (getRight() <= monsters2->getRight() && getRight() >= monsters2->getLeft())) {
            if(getTop() == monsters2->getBottom()) {
                move(0, 20);
                healthStats();
            }
            if(getTop() == monsters2->getTop()) {
                move(0, -20);
                healthStats();
            }
        }


        if((getTop() >= walls1->getTop() && getTop() <= walls1->getBottom()) || (getBottom() <= walls1->getBottom() && getBottom() >= walls1->getTop())) {
            if(getLeft() <= (walls1->getRight() + 20)) 
                move(20, 0);
            if(getRight() >= (walls1->getLeft() - 20)) 
                move(-20, 0);
        }
        if((getLeft() >= walls1->getLeft() && getLeft() <= walls1->getRight()) || (getRight() <= walls1->getRight() && getRight() >= walls1->getLeft())) {
            if((getTop() <= (walls1->getBottom() + 20)) && (getTop() >= (walls1->getTop() - 20)))
                move(0, 20);
            if((getBottom() >= (walls1->getTop() - 20)) && (getBottom() <= (walls1->getBottom() + 20))) 
                move(0, -20);
        }
        if((getTop() >= walls2->getTop() && getTop() <= walls2->getBottom()) || (getBottom() <= walls2->getBottom() && getBottom() >= walls2->getTop())) {
            if(getLeft() <= (walls2->getRight() + 20)) 
                move(20, 0);
            if(getRight() >= (walls2->getLeft() - 20)) 
                move(-20, 0);
        }
        if((getLeft() >= walls2->getLeft() && getLeft() <= walls2->getRight()) || (getRight() <= walls2->getRight() && getRight() >= walls2->getLeft())) {
            if((getTop() <= (walls2->getBottom() + 20)) && (getTop() >= (walls2->getTop() - 20)))
                move(0, 20);
            if((getBottom() >= (walls2->getTop() - 20)) && (getBottom() <= (walls2->getBottom() + 20))) 
                move(0, -20);
        }


        if((getTop() >= bombs1->getTop() && getTop() <= bombs1->getBottom()) || (getBottom() <= bombs1->getBottom() && getBottom() >= bombs1->getTop())) {
            if((getRight() >= bombs1->getLeft()) && (getRight() <= bombs1->getRight())) {
                bombs1->explode();
                move(-100, 0);
                delay(1000);
                bombs1->undraw();
            }
            if((getLeft() <= bombs1->getRight()) && (getLeft() >= bombs1->getLeft())) {
                bombs1->explode();
                move(100, 0);
                delay(1000);
                bombs1->undraw();
            }
        }
        if((getLeft() >= bombs1->getLeft() && getLeft() <= bombs1->getRight()) || (getRight() <= bombs1->getRight() && getRight() >= bombs1->getLeft())) {
            if(getTop() == bombs1->getBottom()) {
                bombs1->explode();
                move(0, 100);
                delay(1000);
                bombs1->undraw();
            }
            if(getBottom() == bombs1->getTop()) {
                bombs1->explode();
                move(0, -100);
                delay(1000);
                bombs1->undraw();
            }
        }
         if((getTop() >= bombs2->getTop() && getTop() <= bombs2->getBottom()) || (getBottom() <= bombs2->getBottom() && getBottom() >= bombs2->getTop())) {
            if((getRight() >= bombs2->getLeft()) && (getRight() <= bombs2->getRight())) {
                bombs2->explode();
                move(-100, 0);
                delay(1000);
                bombs2->undraw();
            }
            if((getLeft() <= bombs2->getRight()) && (getLeft() >= bombs2->getLeft())) {
                bombs2->explode();
                move(100, 0);
                delay(1000);
                bombs2->undraw();
            }
        }
        if((getLeft() >= bombs2->getLeft() && getLeft() <= bombs2->getRight()) || (getRight() <= bombs2->getRight() && getRight() >= bombs2->getLeft())) {
            if(getTop() == bombs2->getBottom()) {
                bombs2->explode();
                move(0, 100);
                delay(1000);
                bombs2->undraw();
            }
            if(getBottom() == bombs2->getTop()) {
                bombs2->explode();
                move(0, -100);
                delay(1000);
                bombs2->undraw();
            }
        }
    draw();
}