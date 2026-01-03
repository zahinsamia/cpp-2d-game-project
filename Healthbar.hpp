#ifndef HEALTHBAR_H
#define HEALTHBAR_H

using namespace std;

class Healthbar {
    private:
    int left, top, right, bottom, color;
    public:
    Healthbar(int _left, int _top, int _right, int _bottom, int color);
    int getLeft() const;
    int getTop() const;
    int getRight() const;
    int getBottom() const;
    int getColor() const;
    int getMaxHealth() const;
    int getMinHealth() const;
    bool hunterSignal() const;

    void setColor(int value);
    void setRight(int _right);
    void setMaxHealth(int _maxHealth);
    void setMinHealth(int _minHealth);
    void changeHealth();

    void draw();
    void undraw();
};

#endif