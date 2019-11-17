#ifndef RECTANGEL_H_
#define RECTANGEL_H_

#include "shape.h"
#include <string>




class Rectangel : public shape

{
public:


	Rectangel(double _length, double _width, std::string _colour);

	double get_area();






private:


	double length;
	double width;


};
#endif 



















