#ifndef CIRCLE_H_
#define CIRCLE_H_
#include "shape.h"
#include <string>




class Circle : public shape

{
public:

	Circle(double _radius);
	Circle(double _radius, std::string _colour);

	double get_area();

	~Circle();




private:

	double PI = 3.14;
	double radius;

};






















#endif// Circle.h