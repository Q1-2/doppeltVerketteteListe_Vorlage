#include "Liste.h"
#include "Element.h"
#include <iostream>
#include <string>

using namespace std;


int main()
{
	Liste dieListe;
	Element* tmp;
	char weiter;
	string name;

	while (true)
	{
		cout << "Name\t-> ";
		cin >> name;

		tmp = new Element(name);
		dieListe.einfuegenEnde(tmp);
		dieListe.datenAnzeigen();
		cout << "Weiteres Element [j/n]? ";
		cin >> weiter;

		if (weiter == 'n') break;
	}

	dieListe.datenAnzeigen();
	return 0;
}