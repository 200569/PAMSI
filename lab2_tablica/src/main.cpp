#include "IProgram.h"
#include "Tablica.h"
#include "Stoper.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
	int ilosc[] = {10, 100, 1000, 10000, 100000, 1000000};       // Rozmiar docelowy tablicy
	int typ_alg = 0;        // 0-> n+1; 1-> 2n
	int ile_pom = 20;       // Ilość pomiarów Stoperem
	double suma = 0;
	Stoper pom;  // obiekt do przechowywania czasu
	
for (int j=0; j<6; j++){
	suma = 0;
	for (int i=0; i<ile_pom; i++){ // pętla wypisująca pomiary
		Tablica *Pojemnik = new Tablica (10); // tworzenie pojemnika do zapisu danych
		pom.mierz_czas(Pojemnik, typ_alg, ilosc[j]); // pojedynczy pomiar czasu zapełnienia tablicy
		suma += pom.wypisz_czas(); // wypisanie zawartosci
		delete Pojemnik; // usunięcie obiektu
	}
	cout << "Dla "<< ilosc[j] << " elementów sredni czas wynosi: " << suma/ile_pom << endl;
}

	return 0;
}
