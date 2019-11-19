#ifndef CYLIDNER_H_
#define CYLIDNER_H_
#include <string>
#include <iostream>
#include <stdio.h>
#include "Circle.h"

class cylinder: public Circle
{
public:
	

	cylinder(double _radius, double  _height);
	cylinder(double _radius,std::string colour ,double  _height);

	double get_area();
	double get_volym();
	double get_height();
	~cylinder();

private:

	
	double height;

};

#endif// CYLINDER.h