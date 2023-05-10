#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
	Rectangle Mybox;
	Rectangle Yourbox(10, 20);

	Mybox.print_Rectangle_details();
	Yourbox.print_Rectangle_details();

	cout<< "After constructor" << endl;
	cout << "-----------------------------------------------------------" << endl << endl;

	Mybox.setLength(100);
	Mybox.setWidth(300);	
	Yourbox.setLength(200);
	Yourbox.setWidth(400);

	Mybox.print_Rectangle_details();
	Yourbox.print_Rectangle_details();
	

}