#ifndef LISTA_H_
#define LISTA_H_
#include "IProgram.h"
#include "Lista_Elem.h"
#include "ILista.h"


namespace std {

class Lista: public ILista, public IProgram{
public:
	Lista();
	virtual ~Lista();
	// ILista
	virtual void dodaj_poczatek(int liczba);  // dodaje nowy element na poczatek listy
	virtual int rozmiar();                    // zwraca aktualny rozmiar listy
	virtual Lista_Elem* wyszukaj (int klucz); // zwraca wskaźnik na element o podanym kluczu
	//IProgram
	virtual void wykonaj_obliczenia(int typ_alg, int ilosc); // nadpisuje listę danymi, a następnie wyszukuje element
private:
	int Rozmiar;           // pole przechowuje rozmiar listy
	Lista_Elem* pierwszy;  // wskaźnik na pierwszy el listy
	Lista_Elem* ostatni;   // wskaźnik na ostatni el listy

};

} /* namespace std */

#endif /* LISTA_H_ */
