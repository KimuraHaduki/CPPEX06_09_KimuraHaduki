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
	cout << "幅を入力 : ";
	cin >> width;
	cout << "高さを入力 : ";
	cin >> height;
	cout << "奥行を入力 : ";
	cin >> depth;

	Box * box = new Box(width, height, depth);
	cout << "表面積 = " << box->GetSurface() << " cm2" << endl << "体積 = " << box->GetVolume() << " cm3" << endl;
	delete box;
}
