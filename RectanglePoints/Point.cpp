#include "Point.h"
Point::Point(double aX, double aY) { //Constructor
	setX(aX);
	setY(aY);
}
Point::Point(Point& aPoint) {  //Copy Constructor
	setX(aPoint.getX());
	setY(aPoint.getY());

}
Point::~Point() {
	display();
	cout << "  The destructor s now running\n";
	system("pause");
}

double Point::getX() const {
	return x;

}
double Point::getY() const {
	return y;
}

void Point::setXY(double aX, double aY) {
	setX(aX);
	setY(aY);
}
void Point::setX(double aX) {
	x = aX;
}
void Point::setY(double aY) {
	y = aY;
}
void Point::display() const {
	cout << "\n(" << x << "," << y << ")";
}