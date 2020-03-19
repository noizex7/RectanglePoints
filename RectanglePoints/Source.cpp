#include<iostream>
using namespace::std;
#include "Point.h"

int main() {
	Point p1, p2(5.8, 2.3);
	double x, y;

	p1.display();

	cout << "\nEnre las coordenada del puntos Cuadrante I:";
	cin >> x >> y;
	p1.setXY(x, y);

	Point p3(p1);  //Realiza una copea del contenido
	p3.display();

	Point* pointPtr = nullptr;
	pointPtr = new Point(3.7, 5.3);
	pointPtr->display();
	delete pointPtr;


	Point* myPointsArray = nullptr;
	int size, index;
	cout << "\nEntre la cantidad de coordenadas:";
	cin >> size;
	myPointsArray = new Point[size];
	for (index = 0; index < size; index++) {
		cout << "\nEnre las coordenada del puntos Cuadrante I:";
		cin >> x >> y;
		myPointsArray[index].setXY(x, y);
	} //end for
	for (index = 0; index < size; index++) {
		myPointsArray[index].display();
	}//end for
	delete[] myPointsArray;
	system("pause");
	return 0;
}