#include "roundrectangel.h"

Roundrectangel::Roundrectangel(double _radius, double _length, double _width,std::string _colour):
	corner_radius(_radius), Rectangel(_length, _width,_colour)
{}

double Roundrectangel::get_area()
{
	return Rectangel::get_area()* corner_radius*(Rectangel::get_length()+ Rectangel::get_width())+pi* corner_radius* corner_radius;
}

Roundrectangel::~Roundrectangel()
{
}
