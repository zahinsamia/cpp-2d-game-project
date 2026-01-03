#ifndef ENVIRONTMENT_H
#define ENVIRONTMENT_H

class Environtment {
    private:
    int left, top, right, bottom, color;
    public:
    Environtment(int _left, int _top, int _right, int _bottom);

	int getLeft() const;
	int getTop() const;
	int getRight() const;
	int getBottom() const;
	
	void setLeft(int _x);
	void setTop(int _y);
	void setRight(int _width);
	void setBottom(int _height);

	void draw();
};

#endif
