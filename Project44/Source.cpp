#include<iostream>
#include <string>
#include "Circle.h"
#include "shape.h"
#include <windows.h>
#include "rectangel.h"
using namespace std;


int main()

{




	Circle a(5.1, "red");
	Rectangel b(5, 6, "blue");

	std::cout << "The area of circle is = " << a.get_area() << " And the coloure of the circle is = " << a.get_colour() << endl;
	std::cout << "The area of Rectangel is = " << b.get_area() << " And the coloure of the Rectangel is = " << b.get_colour() << endl;
	system("pause");
	return 0;
}