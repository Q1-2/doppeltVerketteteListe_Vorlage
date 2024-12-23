#pragma once
#include <iostream>
#include <string>

using namespace std;

class Element; //Vorwärtsdeklaration

class Liste
{
private:

	Element* kopfzeiger;
	Element* fusszeiger;

public:
	Liste();
	~Liste();
	void einfuegenAnfang(Element*);
	void einfuegenEnde(Element*);
	void entfernenAnfang();
	void entfernenEnde();
	bool leer();
	void loescheElement(string name);
	const Element* getKopfzeiger();
	void setKopfzeiger(Element*);
	const Element* getFusszeiger();
	void setFusszeiger(Element*);
	void datenAnzeigen();
};
