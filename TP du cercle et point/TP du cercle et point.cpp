// TP du cercle et point.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "cercle.h"
#include "point.h"
using namespace std;

int main()
{
	point p(10, 10);
	cercle c(1, p);
	c.afficher();      
	cout << "############################ : " << endl;

	cout << "Perimetre: " << c.perimetre() << endl
		<< "Surface: " << c.surface() << endl;
	cout << "############################ : " << endl;

	c.setRayon(c.getRayon() * 2);
	cout << "############################ : " << endl;
	cout << "Apres doublement du rayon : " << endl
		<< "Perimetre: " << c.perimetre() << endl
		<< "Surface: " << c.surface() << endl;
	cout << "############################ : " << endl;


	c.translation(-10);

	point p1(5, 5);
	cout << "Le point : ";
	p1.afficher();
	if (c.appartenance(p1)) {
		cout << " est a l'interieur du cercle" << endl;
	}
	else {
		cout << " est a l'exterieur du cercle" << endl;
	}

	point p2(2, 2);
	cout << "Le point : ";
	p2.afficher();
	if (c.appartenance(p2)) {
		cout << "est a l'interieur du cercle" << endl;
	}
	else {
		cout << "est a l'exterieur du cercle" << endl;
	}

	cercle c2(5, 3, 3);
	if (c.egalite(c2)) {
		cout << "Les deux cercles sont identiques" << endl;
	}
	else
		cout << "Les deux cercles ne sont pas identiques" << endl;
	return 0;

}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
