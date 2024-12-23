#pragma once
#include <iostream>
#include <string>

using namespace std;

class Element
{
private:
	string daten;
	Element* vorgaenger;
	Element* nachfolger;

public:
	Element(string);
	~Element();

	string getDaten();
	void setDaten(string);
	Element* getNachfolger();
	void setNachfolger(Element*);
	Element* getVorgaenger();
	void setVorgaenger(Element*);
};