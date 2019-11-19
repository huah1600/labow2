#include "Circle.h"





Circle::Circle(double _radius):
radius(_radius)
{}

Circle::Circle(double _radius, std::string _colour) :radius(_radius), shape(_colour)
{

}

double Circle::get_area()
{


	return   PI * radius*radius;
}

Circle::~Circle()
{
}
