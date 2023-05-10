#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
	Rectangle Mybox;
	Rectangle Yourbox(1.0, 2.0);

	Mybox.print_Rectangle_details();
	Yourbox.print_Rectangle_details();

	cout<< "After constructor" << endl;
	cout << "-----------------------------------------------------------" << endl << endl;

	Mybox.setLength(10.0);
	Mybox.setWidth(30.7);	
	Yourbox.setLength(20.6);
	Yourbox.setWidth(40.4);

	Mybox.print_Rectangle_details();
	Yourbox.print_Rectangle_details();
	

}