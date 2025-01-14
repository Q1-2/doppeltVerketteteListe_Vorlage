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
	// 1. Iteriere durch die Liste mit einem temporären Zeiger, beginnend beim kopfzeiger.
	// 2. Lösche jedes Element mit delete und setze den Zeiger auf den Nachfolger.
	// 3. Achte darauf, dass nach dem Löschen kopfzeiger und fusszeiger auf nullptr gesetzt werden, um Speicherlecks zu vermeiden.
	cout << " Destruktor - Liste" << endl;
}

void Liste::einfuegenAnfang(Element* neu)
{
	// ToDo
	// 1. Prüfe, ob die Liste leer ist.Falls ja, setze sowohl kopfzeiger als auch fusszeiger auf das neue Element.
	// 2. Falls nicht, aktualisiere die Nachfolger - und Vorgänger - Zeiger des neuen Elements und des aktuellen Kopfes, damit das neue Element an den Anfang gesetzt wird.
	// 3. Aktualisiere den kopfzeiger, um auf das neue Element zu zeigen.
}

void Liste::einfuegenEnde(Element* neu)
{
	// ToDo
	// 1. Prüfe, ob die Liste leer ist. Falls ja, verhalte dich wie bei einfuegenAnfang.
	// 2. Andernfalls aktualisiere die Nachfolger - und Vorgänger - Zeiger des neuen Elements und des aktuellen Endes, sodass das neue Element ans Ende der Liste eingefügt wird.
	// 3. Aktualisiere den fusszeiger, um auf das neue Element zu zeigen.
}

void Liste::entfernenAnfang()
{
	// ToDo
	// 1. Prüfe, ob die Liste leer ist.Wenn ja, tue nichts oder gib eine Fehlermeldung aus.
	// 2. Falls nicht, speichere das aktuelle Element, auf das der kopfzeiger zeigt, in einem temporären Zeiger.
	// 3. Aktualisiere den kopfzeiger, sodass er auf den Nachfolger des aktuellen Kopfes zeigt.
	// 4. Lösche das gespeicherte Element und aktualisiere ggf.den Vorgänger des neuen Kopfes auf nullptr.
	// 5. Falls die Liste nach dem Entfernen leer ist, setze auch den fusszeiger auf nullptr.
}

void Liste::entfernenEnde()
{
	// ToDo
	// 1. Prüfe, ob die Liste leer ist.Wenn ja, verhalte dich wie bei entfernenAnfang.
	// 2. Speichere das aktuelle Element, auf das der fusszeiger zeigt, in einem temporären Zeiger.
	// 3. Aktualisiere den fusszeiger, sodass er auf den Vorgänger des aktuellen Endes zeigt.
	// 4. Lösche das gespeicherte Element und setze den Nachfolger des neuen Endes auf nullptr.
	// 5. Falls die Liste nach dem Entfernen leer ist, setze auch den kopfzeiger auf nullptr.
}

bool Liste::leer()
{
	// ToDo
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
	cout << "Listen-Anfang: ";
	// ToDo
	cout << "Listen-Ende" << endl;
}

void Liste::loescheElement(string name)
{
	// ToDo
	// 1. Durchlaufe die Liste vom kopfzeiger bis zum fusszeiger, um das Element mit dem angegebenen Namen zu finden.
	// 2. Entferne das Element aus der Liste, indem du die Nachfolger - und Vorgänger - Zeiger des vorherigen und des nächsten Elements entsprechend aktualisierst.
	// 3. Falls das Element am Anfang oder Ende liegt, achte darauf, den kopfzeiger oder fusszeiger zu aktualisieren.
	// 4. Lösche das gefundene Element und überprüfe, ob die Liste danach leer ist.
}
