#include "rectangel.h"



Rectangel::Rectangel(double _length, double _width, std::string _colour) :length(_length), width(_width), shape(_colour)
{


}

double Rectangel::get_area()
{
	return width * length;
}