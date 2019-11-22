//
//
//
#include "Box.h"

Box::Box()
{
	l = 1.0;
	h = 1.0;
	w = 1.0;
}

Box::Box(double Length, double Height, double Width)
{
	l = Length;
	h = Height;
	w = Width;
}

double Box::GetVolume()
{
	return l * h * w;
}