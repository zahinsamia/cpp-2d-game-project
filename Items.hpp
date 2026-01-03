#ifndef ITEMS_H
#define ITEMS_H


class Items {
    protected:
    int left, top, right, bottom;


    public:
    Items(int _left, int _top, int _right, int _bottom);
    int getLeft() const;
	int getTop() const;
	int getRight() const;
	int getBottom() const;

    void setLeft(int _x);
	void setTop(int _y);
	void setRight(int _width);
	void setBottom(int _height);

	virtual void draw() = 0;
	virtual void undraw();
	virtual void interaction() = 0;
};

#endif