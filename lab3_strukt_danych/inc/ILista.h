#ifndef ILISTA_H_
#define ILISTA_H_
#include "IProgram.h"
#include "Lista_Elem.h"

namespace std {

class ILista{
public:
	ILista();
	virtual ~ILista();
	virtual Lista_Elem* wyszukaj(int klucz)=0;	// zwraca wskaźnik na element o podanym kluczu
	virtual void dodaj_poczatek(int liczba)=0;	// dodaje nowy element na początek listy
	virtual int rozmiar()=0;               		// zwraca aktualny rozmiar listy
};
} /* namespace std */

#endif /* ILISTA_H_ */
