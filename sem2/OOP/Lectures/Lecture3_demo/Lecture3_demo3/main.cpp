#include "Vector2D.h"
#include "DynamicVector.h"
#include <iostream>
#include <string>
#include <Windows.h>

#define PI 3.14159265
#include<cmath>

int main()
{
	system("color f4");

	Vector2D v1{ -1, 1 };
	Vector2D v2{2, 3};
	Vector2D v3 = v1 + v2;	// <=> Vector2D v3 = v1.operator+(v2);
	Vector2D v4 = v1 * 3;	// <=> Vector2D v3 = v1.operator*(3);

	Vector2D v5 = 3 * v1;	// will this work? Why/why not?
	
	std::cout << "v3 is: " << v3.toString();
	std::cout << "v4 is: " << v4.toString();
	//std::cout << "v5 is: " << v5.toString();

	Vector2D v6{};
	v6 = v4;			// assignment operator called
	v6 = v2 = v1;		// assignment operator called twice <=> v6.operator=(v2.operator=(v1))

	Vector2D v7 = v1;	// copy constructor is called (a new object is created and data is copied into it)
	Vector2D v8;
	v8 = v2;			// assignment operator is called (the object already exists, data is copied into it)

	// Dynamic Vector - What happens here if the DynamicVector class does not have an overloaded assignment operator?
	DynamicVector vect1;
	{
		DynamicVector vect2{ 5 }; // initializes a dynamic vector, capacity = 5
		vect2.add(1);
		vect2.add(2);
		vect1 = vect2;
	}
	int x = vect1[0];
	
	// static class member
	//std::cout << "There are " << Vector2D::numberOfInstances << " objects of class Vector2D." << std::endl;
	std::cout << "There are " << Vector2D::getNumberOfInstances() << " objects of class Vector2D." << std::endl;

	// friend function
	std::cout << "v4 is: ";
	printVectorData(v4);

	// friend class
	Vector2D vectorOf2DVectors[20] = { v1, v2, v3, v4 };
	Graphics g(vectorOf2DVectors, 4);
	g.printAllYCoordinates();

	system("pause");
	return 0;
}