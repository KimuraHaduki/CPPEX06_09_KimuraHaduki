#include <iostream>
#include "Box.h"
using namespace std;

Box::Box(float width, float height, float depth) {
	this->width = width;
	this->height = height;
	this->depth = depth;
}
float Box::GetSurface() {
	return (this->width * this->height) * 2 + (this->width * this->depth) * 2 + (this->height * this->depth) * 2;
}
float Box::GetVolume() {
	return this->width * this->height * this->depth;
}

int main()
{
	float width, height, depth;
	cout << "•‚ð“ü—Í : ";
	cin >> width;
	cout << "‚‚³‚ð“ü—Í : ";
	cin >> height;
	cout << "‰œs‚ð“ü—Í : ";
	cin >> depth;

	Box * box = new Box(width, height, depth);
	cout << "•\–ÊÏ = " << box->GetSurface() << " cm2" << endl << "‘ÌÏ = " << box->GetVolume() << " cm3" << endl;
	delete box;
}
