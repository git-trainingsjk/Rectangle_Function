#include <iostream>
#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle()
{
	Length = 2.0;
	Width = 2.0;
}

Rectangle::Rectangle(double Length, double Width)
{
	this->Length = Length;
	this->Width = Width;
}

double Rectangle::getLenth() const
{
	return(Length);
}

double Rectangle::getWidth() const
{
	return(Width);
}

void Rectangle::setLength(double Length)
{
	this->Length = Length;
}

void Rectangle::setWidth(double Width)
{
	this->Width = Width;
}

double Rectangle::perimeter() const
{
	return((2 * Length) + (2 * Width));
}
double Rectangle::area() const
{
	return(Length * Width);
}


void Rectangle::print_Rectangle_details() const
{
	cout << "The box has a length = " << Length << " & width = " << Width << " Area = " << area() << " and Perimeter = "<< perimeter() <<endl << endl;
}