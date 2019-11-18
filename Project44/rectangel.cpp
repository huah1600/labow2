#include "rectangel.h"



Rectangel::Rectangel(double _length, double _width, std::string _colour) :length(_length), width(_width), shape(_colour)
{}

Rectangel::Rectangel(double _length, double _width) :length(_length), width(_width)
{}
double Rectangel::get_length()
{
	return length;
}

double Rectangel::get_width()
{
	return width;
}

double Rectangel::get_area()
{
	return width * length;
}


