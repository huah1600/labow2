#include "Parallelepiped.h"
#include "rectangel.h"


Parallelepiped::Parallelepiped(double edge, double _length, double _width, std::string _colour):
	edge_c(edge), Rectangel(_length, _width, _colour)
{}



double Parallelepiped::get_area()
{
	return 2 *(Rectangel::get_area() + Rectangel::get_length() * edge_c + Rectangel::get_width()* edge_c);
}

Parallelepiped::~Parallelepiped()
{
}

