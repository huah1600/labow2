#ifndef Parallelepiped_H_
#define Parallelepiped_H_
#include <string>
#include <iostream>
#include <stdio.h>
#include "Parallelepiped.h"
#include "rectangel.h"
class Parallelepiped : public Rectangel
{
public:


	Parallelepiped(double edge, double _length, double _width, std::string _colour);
	//Parallelepiped(double  edge, std::string colour, double  _height);

	double get_area();
	
	~Parallelepiped();
	


private:


	double edge_c;
	
};

#endif//roundrectangel.h