#include "cylinder.h"






cylinder::cylinder(double _radius, double _height):	
Circle(_radius),height(_height)
{}

cylinder::cylinder(double _radius, std::string _colour, double _height):
	Circle(_radius,_colour),height(_height)
{}


double cylinder::get_volym()
{
	return Circle::get_area() * height;
}

double cylinder::get_height(){

	return height;

}


double cylinder::get_area()
{
	return Circle::get_area() * height;
}

