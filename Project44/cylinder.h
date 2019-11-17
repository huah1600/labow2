#ifndef CYLIDNER_H_
#define CYLIDNER_H_
#include <string>
#include <iostream>
#include <stdio.h>


class cylinder

{
public:
	cylinder(std::string coloure);
	std::string get_colour();
	virtual double get_area() = 0;



private:

	std::string colour;

};

#endif// CYLINDER.h