#ifndef RECTANGEL_H_
#define RECTANGEL_H_

#include "shape.h"
#include <string>




class Rectangel : public shape

{
public:


	Rectangel(double _length, double _width, std::string _colour);
	Rectangel(double _length, double _width);
	double get_area();
	double get_length();
	double get_width();
	~Rectangel();




private:


	double length;
	double width;


};
#endif 



















