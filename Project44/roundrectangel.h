#ifndef ROUNDRECTANGEL_H_
#define ROUNDRECTANGEL_H_
#include <string>
#include <iostream>
#include <stdio.h>
#include "rectangel.h"

class Roundrectangel: public Rectangel
{
public:


	Roundrectangel(double _radius,double _length,double _width, std::string _colour);
	//cylinder(double _radius, std::string colour, double  _height);

	double get_area();
	~Roundrectangel();



private:


	double corner_radius;
	double pi = 3.14;
};

#endif//roundrectangel.h