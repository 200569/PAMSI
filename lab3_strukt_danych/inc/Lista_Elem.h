#ifndef LISTA_ELEM_H_
#define LISTA_ELEM_H_

namespace std {

class Lista_Elem {
public:
	Lista_Elem *nastepny;
	int wartosc;

	Lista_Elem();
	virtual ~Lista_Elem();
};

} /* namespace std */

#endif /* LISTA_ELEM_H_ */
