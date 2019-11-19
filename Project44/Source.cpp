#include<iostream>
#include <string>
#include "Circle.h"
#include "shape.h"
#include <windows.h>
#include "rectangel.h"
#include "cylinder.h"
#include "roundrectangel.h"
#include "Parallelepiped.h"
using namespace std;


int main()

{

	


	Circle a(5.1, "red");
	Rectangel b(5, 6, "blue");
	cylinder e(5.0,"yellow",6.0);
	Roundrectangel d(5.0,5.0,5.0,"black");
	Parallelepiped c(5.0, 5.0, 5.0, "white");
	
	std::cout << "The area of circle is = " << a.get_area() << " And the coloure of the circle is = " << a.get_colour() << endl;
	std::cout << "The area of Rectangel is = " << b.get_area() << " And the coloure of the Rectangel is = " << b.get_colour() << endl;
	std::cout << "The area of Cylinder is = " << e.get_area() << " And the coloure of the cylinder is = " << e.get_colour() << endl;
	std::cout << "The area of Roundrectangel  is = " << d.get_area() << " And the coloure of the Roundrectangel  is = " << d.get_colour() << endl;
	std::cout << "The area of Parallelepiped  is = " << c.get_area() << " And the coloure of the Parallelepiped  is = " << c.get_colour() << endl;
	system("pause");
	return 0;
}