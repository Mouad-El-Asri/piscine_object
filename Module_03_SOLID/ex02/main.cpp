#include "Circle.hpp"
#include "Rectangle.hpp"
#include "Triangle.hpp"

void printShapeArea(const Shape &shape) {
	std::cout << "The shape area is : " << shape.area() << std::endl;
}

void printShapePerimeter(const Shape &shape) {
	std::cout << "The shape perimeter is : " << shape.perimeter() << std::endl;
}

int main() {
	Circle circle = Circle(5.0);
	Rectangle rectangle = Rectangle(10.0, 4.0);
	Triangle triangle = Triangle(8.0, 6.0, 5.0, 5.0);

	// Printing shapes areas
	printShapeArea(circle);
	printShapeArea(rectangle);
	printShapeArea(triangle);

	// Printing shapes perimeter
	printShapePerimeter(circle);
	printShapePerimeter(rectangle);
	printShapePerimeter(triangle);

	return 0;
}
