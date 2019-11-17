#ifndef SHAPE_H_
#define SHAPE_H_
#include <string>
#include <iostream>
#include <stdio.h>


class shape

{
public:
	shape(std::string coloure);
	std::string get_colour();
	virtual double get_area() = 0;



private:

	std::string colour;

};






















#endif// shape.h