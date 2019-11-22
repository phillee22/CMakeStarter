#pragma once

class Box
{
	double l;
	double h;
	double w;

public:
	Box();
	Box(double, double, double);
	double GetVolume();
};