#ifndef HUNTER_H
#define HUNTER_H 
#include "Character.hpp"
#include "Monster.hpp"
#include "Environtment.hpp"
#include "Bomb.hpp"
#include "Healthbar.hpp"

class Hunter : public Character {
    protected:
    Monster *monsters1;
    Monster *monsters2;
    Environtment *walls1;
    Environtment *walls2;
    Bomb *bombs1;
    Bomb *bombs2;
    Healthbar *healthbar;
    public:
    int countMonster = 2;
    int countWall = 2;
    int countBomb = 2;
    Hunter(int _left = 0, int top = 0, int _right = 0, int _bottom = 0, Healthbar *_healthbar = nullptr, Monster *_monsters1 = nullptr, Monster *_monsters2 = nullptr,  Environtment *_walls1 = nullptr, Environtment *_walls2 = nullptr, Bomb *_bombs1 = nullptr, Bomb *_bombs2 = nullptr);
    void draw();
    void move(int dx, int dy);
    void healthStats();
    void colission();
};

#endif