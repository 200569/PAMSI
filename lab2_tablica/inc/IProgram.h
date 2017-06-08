// Interface

#ifndef IPROGRAM_H_
#define IPROGRAM_H_

class IProgram{ 
public:
	IProgram();  // Konstruktor
	virtual ~IProgram();  // Destruktor
	virtual void wykonaj_obliczenia(int typ_alg, int ilosc)=0; // wirtualna metoda pozwala na zapełnienie dowolnego pojemnika z danymi
};

#endif /* IPROGRAM_H_ */
