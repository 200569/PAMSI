#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Stoper.h"
#include "Lista.h"
#include "Stos.h"
#include "Kolejka.h"

using namespace std;

int main() {

	int ilosc = 10000;       // Rozmiar docelowy tablicy
	int typ_alg = 0;        // 0-> n+1; 1-> 2n
	int ile_pom = 20;       // Ilość pomiarów Stoperem
	Stoper pom;  // obiekt do przechowywania czasu

	cout << "Ilość elementów: " << ilosc << endl; //ilość elementów
	cout << "Ilość pomiarów: " << ile_pom << endl; //ilość poamirów

	//lista
	cout << "Lista" << endl;
	for (int i = 0; i < ile_pom; i++) { // pętla wypisująca pomiary
		Lista *list = new Lista;
		pom.mierz_czas(list, typ_alg, ilosc); // pojedynczy pomiar czasu zapełnienia tablicy
		cout << pom.wypisz_czas() << endl; // wypisanie zawartosci
		delete list; // usunięcie obiektu
	}
	cout << endl;

	//stos
	cout << "Stos" << endl;
	for (int i = 0; i < ile_pom; i++) { // pętla wypisująca pomiary
		Stos *stos = new Stos(ilosc);
		pom.mierz_czas(stos, typ_alg, ilosc); // pojedynczy pomiar czasu zapełnienia tablicy
		cout << pom.wypisz_czas() << endl; // wypisanie zawartosci
		delete stos; // usunięcie obiektu
	}
	cout << endl;

	//kolejka
	cout << "Kolejka" << endl;
	for (int i = 0; i < ile_pom; i++) { // pętla wypisująca pomiary
		Kolejka *kolejka = new Kolejka(ilosc);
		pom.mierz_czas(kolejka, typ_alg, ilosc); // pojedynczy pomiar czasu zapełnienia tablicy
		cout << pom.wypisz_czas() << endl; // wypisanie zawartosci
		delete kolejka; // usunięcie obiektu
	}
	cout << endl;

	return 0;
}
