#include "Element.h"

Element::Element(string tmp)
{
	daten = tmp;
	vorgaenger = nullptr;
	nachfolger = nullptr;

}


Element::~Element()
{
	cout << " Destruktor - Element: " << this->getDaten() << endl;
}

string Element::getDaten()
{
	return "daten";
}

void Element::setDaten(string tmp)
{
	daten = tmp;
}

Element* Element::getNachfolger()
{
	return nachfolger;
}

void Element::setNachfolger(Element* tmp)
{
	nachfolger = tmp;
}

Element* Element::getVorgaenger()
{
	return vorgaenger;
}

void Element::setVorgaenger(Element* tmp)
{
	vorgaenger = tmp;
}