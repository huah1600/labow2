#include "shape.h"
#include <string>








shape::shape(std::string coloure)
{
	colour = coloure;
}

std::string shape::get_colour()
{
	return colour;
}

shape::~shape()
{
}

shape::shape()
{
}
