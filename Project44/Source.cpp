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

void getData(std::vector<std::unique_ptr<shape>>& ptrs);


int main()

{

	std::vector<std::unique_ptr<shape>> pointers;

	pointers.push_back(std::make_unique< Rectangel>(5, 7, "Green"));
	
	//pointers.push_back(std::make_unique< cylinder>(5, "red",7 ));
	getData(pointers);
	/*
	pointers.push_back(std::make_unique<Circle>(7, "Yellow"));
	
	pointers.push_back(std::make_unique<Roundrectangel>(8, 6, 2, "Blue"));
	pointers.push_back(std::make_unique<Parallelepiped>(2, 4, 6, "red"));
	getData(pointers);
	*/
	system("pause");
	return 0;
}


void getData(std::vector<std::unique_ptr<shape>>& ptrs) {
	for (int i = 0; i < ptrs.size(); i++) {
		shape& pointerIndex = *ptrs[i];
		std::cout << "Area of " << typeid(pointerIndex).name() << " is "
			<< ptrs[i]->get_area() << " cm, and has the colour " << ptrs[i]->get_colour() << '\n';
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