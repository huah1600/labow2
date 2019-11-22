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
#include <memory>
using namespace std;
//virtuel functions använder samma funktion men  olika resultat
 

void GetData(vector<shape*>shapes);
//
int main()

{
	//Circle a(5.1, "red");
	//Rectangel b(5, 6, "blue");
	 //utan endast refererar till överskrivna funktioner i andra klasser
	vector<shape*>shapes;
	
	shapes.push_back(new Rectangel(5, 6, "blue")); //för in värde från construct
	shapes.push_back(new Circle (5.1, "red"));
	shapes.push_back(new cylinder (5.0, "yellow", 6.0));
	shapes.push_back(new Roundrectangel (5.0, 5.0, 5.0, "black"));
	shapes.push_back(new Parallelepiped (5.0, 5.0, 5.0, "white"));
	GetData(shapes);
	
	system("pause");
	return 0;
}


void GetData(vector<shape*>shapes) {

	double totalarea = 0;
	for (int i = 0; i < shapes.size(); i++) {
		
		auto& shapeindex = *shapes[i];
		totalarea = totalarea + shapes[i]->get_area();

		std::cout << typeid(shapeindex).name() <<" area::"<< shapes[i]-> get_area() <<" color:: "<< shapes[i]->get_colour() << endl;
		
		
	}
	std::cout << "The total area of all classes with diffrent figures is == " << totalarea << "\n";
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















	/*
		//std::cout << "The area of circle is = " << a.get_area() << " And the coloure of the circle is = " << a.get_colour() << endl;
		//std::cout << "The area of Rectangel is = " << b.get_area() << " And the coloure of the Rectangel is = " << b.get_colour() << endl;


		Roundrectangel round(5.0, 5.0, 5.0, "black");
		cylinder cyl(5.0, "yellow", 6.0);
		shape* Cylinder = &cyl;
		shape* RoundRectangel = &round;


		std::cout << "The area of Cylinder is = " << cyl.get_area() << " And the coloure of the cylinder is = " << cyl.get_colour() << endl;
		std::cout << "The area of Cylinder is = " << Cylinder->get_area() << " And the coloure of the cylinder is = " << Cylinder->get_colour() << endl;
		std::cout << "The area of Roundrectangel  is = " << round.get_area() << " And the coloure of the Roundrectangel  is = " << round.get_colour() << endl;
		std::cout << "The area of Roundrectangel  is = " << RoundRectangel->get_area() << " And the coloure of the Roundrectangel  is = " << RoundRectangel->get_colour() << endl;
		//std::cout << "The area of Roundrectangel  is = " << RoundRectangel->get_area() << " And the coloure of the Roundrectangel  is = " << RoundRectangel->get_colour() << endl;
		//shape* Cylinder = &cyl;
		//shape* RoundRectangel = &round;
		//std::cout << "The area of Cylinder is = " << Cylinder->get_area() << " And the coloure of the cylinder is = " << Cylinder->get_colour() << endl;

		//std::cout << "The area of Roundrectangel  is = " << RoundRectangel->get_area() << " And the coloure of the Roundrectangel  is = " << RoundRectangel->get_colour() << endl;
		*/
