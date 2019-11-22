#include<iostream>
#include <string>
#include "Circle.h"
#include "shape.h"
#include <windows.h>
#include "rectangel.h"
#include "cylinder.h"
#include "roundrectangel.h"
#include "Parallelepiped.h"
#include <vector>
using namespace std;

void getData(std::vector<*shape> shapes);


int main()

{


	std::vector<*shape> shapes;
	shapes.push_back(new Rectangel(4, 5, "purple")); //Lägger till en rektangel

	
	getData(shapes);
	
	system("pause");
	return 0;
}


void getData(std::vector<*shape>shapes) {
	for (int i = 0; i < shapes.size(); i++) {

		double totalarea = 0;
		shape& pointerIndex = *shapes[i];
		totalarea=totalarea + *shapes[i];
		std::cout << "Area of " << typeid(pointerIndex).name() << " is "<< shapes[i]->get_area() << " cm, and has the colour " << shapes[i]->get_colour() << '\n';
	}
}











/*
	Circle a(5.1, "red");
	Rectangel b(5, 6, "blue");
	cylinder e(5.0,"yellow",6.0);
	Roundrectangel d(5.0,5.0,5.0,"black");
	Parallelepiped c(5.0, 5.0, 5.0, "white");
	
	std::cout << "The area of circle is = " << a.get_area() << " And the coloure of the circle is = " << a.get_colour() << endl;
	std::cout << "The area of Rectangel is = " << b.get_area() << " And the coloure of the Rectangel is = " << b.get_colour() << endl;
	std::cout << "The area of Cylinder is = " << e.get_area() << " And the coloure of the cylinder is = " << e.get_colour() << endl;
	std::cout << "The area of Roundrectangel  is = " << d.get_area() << " And the coloure of the Roundrectangel  is = " << d.get_colour() << endl;
	std::cout << "The area of Parallelepiped  is = " << c.get_area() << " And the coloure of the Parallelepiped  is = " << c.get_colour() << endl;*/
