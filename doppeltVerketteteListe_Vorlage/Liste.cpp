#include "Liste.h"
#include "Element.h"


Liste::Liste()
{
	kopfzeiger = nullptr;
	fusszeiger = nullptr;
}

Liste::~Liste()
{
	// ToDo
	cout << " Destruktor - Liste" << endl;
}

void Liste::einfuegenAnfang(Element* neu)
{
	// ToDo
}

void Liste::einfuegenEnde(Element* neu)
{
	// ToDo
}

void Liste::entfernenAnfang()
{
	// ToDo
}

void Liste::entfernenEnde()
{
	// ToDo
}

bool Liste::leer()
{
	if (kopfzeiger == nullptr) return true;
	return false;
}

const Element* Liste::getKopfzeiger()
{
	return kopfzeiger;
}

void Liste::setKopfzeiger(Element* tmp)
{
	kopfzeiger = tmp;
}

const Element* Liste::getFusszeiger()
{
	return fusszeiger;
}

void Liste::setFusszeiger(Element* tmp)
{
	fusszeiger = tmp;
}

void Liste::datenAnzeigen()
{
	Element* cursor = kopfzeiger;
	cout << "Listen-Anfang: ";
	while (cursor != nullptr)
	{
		cout << cursor->getDaten() << " ";
		cursor = cursor->getNachfolger();
	}
	cout << "Listen-Ende" << endl;
}

void Liste::loescheElement(string name)
{
	// ToDo
}
