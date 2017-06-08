#ifndef TABLICA_H_
#define TABLICA_H_
#include "IProgram.h"
#include <iostream>
#include <cstdlib>

class Tablica: public IProgram{ // tablica która może zmieniać swój rozmiar
public:
	int przypisanie (int pozycja, int wartosc); // przypisanie indeksowi tablicy sprecyzowaniej wartości
	int odczytanie (int pozycja);  // zwraca wartosc elementu przypisanego do indeksu tablicy
	int rozmiar ();  // zwraca rozmiar tablicy
	int wypelnienie ();  // zwraca zapelnienie tablicy
	virtual void wykonaj_obliczenia (int typ_alg, int ilosc); // zapisuje podaną ilość elementów do tablicy (konkretnym algorytmem)
	Tablica (int r=10); // konstruktor - domyślnie rozmiar = 10
	~Tablica (); // dekonstruktor
private:
	int ROZMIAR;  // pole przechowuje informację na temat aktualnego rozmiaru tablicy
	int WYPELNIENIE;  // aktualne wypełnienie tablicy
	int *TABLICA;  // wskaźnik na tablicę

	int *powieksz_tablice (int rozmiar, int stara_tablica[]);  // powiększa tablicę o zadaną wielkość
	int *zmniejsz_tablice (int rozmiar, int wypelnienie, int stara_tablica[]); // usuwa pustą przestrzeń w tablicy
};

#endif /* TABLICA_H_ */
