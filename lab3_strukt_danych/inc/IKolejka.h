#ifndef IKOLEJKA_H_
#define IKOLEJKA_H_

namespace std {

class IKolejka {
public:
	IKolejka();
	virtual ~IKolejka();
	virtual void dodaj(int element)=0; 		// dodaje element na początek kolejki
	virtual void usun()=0;      			// pobiera ostatni element kolejki
	virtual int rozmiar()=0;           		// podaje aktualny rozmiar kolejki
	virtual int pierwszy()=0;            	// wartość pierwszego elementu
	virtual int wyszukaj(int klucz)=0; 		// szuka elementu o podanym kluczu w kolejce
	virtual bool czy_pusta()=0;		  		// sprawdza czy kolejka jest pusta

};

} /* namespace std */

#endif /* IKOLEJKA_H_ */
