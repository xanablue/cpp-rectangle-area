// Xana Navoichick - Assignment 2: Rectangle Area //

#include <iostream>
#include <conio.h>

int rectangleLength;
int rectangleWidth;
int rectangleArea;

int GetLengthFromUser() {
	int length;
	std::cout << "Please enter the length of the rectangle:\n";
	std::cin >> length;
	std::cout << "Got it!";
	return length;
}

int GetWidthFromUser() {
	int width;
	std::cout << "\nPlease enter the width of the rectangle:\n";
	std::cin >> width;
	std::cout << "Got it!";
	return width;
}

int CalculateArea(int length, int width) {
	int area = length * width;
	return area;
}

void DisplayArea(int area) {
	std::cout << "\nThe area of the rectangle is: ";
	std::cout << rectangleArea;
}

int main() {
	rectangleLength = GetLengthFromUser();
	rectangleWidth = GetWidthFromUser();
	rectangleArea = CalculateArea(rectangleLength, rectangleWidth);
	DisplayArea(rectangleArea);
	(void)_getch();
	return 0;
}