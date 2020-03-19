#pragma once
#include<iostream>
using namespace::std;
class Point
{
private:
	double x, y;
public:
	Point(double = 0.0, double = 0.0); // Cocntructor
	Point(Point& aPoint); //Copy Constructor
	~Point();
	double getX() const;  //Accessors
	double getY() const;
	void setX(double aX);
	void setY(double aY); // Mutators
	void setXY(double x, double y);
	void display() const; //Show point
};

