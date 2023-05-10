#ifndef RECTANGLE_H
#define RECTANGLE_H


class Rectangle
{
public: 
	
	Rectangle();
	Rectangle(double Length, double Width);
	double getLenth() const;
	double getWidth() const;
	void setLength(double Length);
	void setWidth(double Width);
	double area() const;
	void print_Rectangle_details() const;

private:
	double Length;
	double Width;

};



#endif