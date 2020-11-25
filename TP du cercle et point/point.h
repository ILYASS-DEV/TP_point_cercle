#pragma once
#include <iostream>
#include <math.h>
using namespace std;
class point
{
	float x, y;

public:
	point(float a = 0, float b = 0) {
		x = a;
		y = b;
	}

	float getX() {
		return x;
	}
	void setX(float a) {
		x = a;
	}

	float getY() {
		return y;
	}
	void setY(float a) {
		y = a;
	}

	void afficher() {
		cout << "(" << x << "," << y << ")";
	}

	void translation(float a) {
		x += a;
		y += a;
	}


	bool comparer(point p) {
		if (x == p.x && y == p.y)
			return true;

		return false;
	}

	float distance(point p) {
		return sqrt(pow(x - p.x, 2) + pow(y - p.y, 2));
	}

};

