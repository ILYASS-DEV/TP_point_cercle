#pragma once
#include "point.h"
#include <iostream>
#include <math.h>
using namespace std;
class cercle {
	float r;
	point centre;

public:

	cercle(float a, point p) {
		r = a;
		centre = p;
	}

	cercle(float a, float x, float y) {
		r = a;
		centre.setX(x);
		centre.setY(y);
	}

	void afficher() {
		cout << "Affichage du cercle : " << endl;
		cout << "Le rayon est: " << r << endl;
		cout << "Le centre est : ";
		centre.afficher();
		cout << endl << "-----" << endl;
	}

	float getRayon() {
		return r;
	}

	void setRayon(float a) {
		r = a;
	}

	point getCentre() {
		return centre;
	}
	void translation(float a) {
		centre.translation(a);
	}

	float surface() {
		return r * r * 3.14;
	}

	float perimetre() {
		return 2 * 3.14 * r;
	}

	bool egalite(cercle c) {
		return (c.r == r and centre.comparer(c.centre));
	}

	bool appartenance(point p) {
		if (centre.distance(p) <= r) {
			return true;
		}
		return false;
	}
};

