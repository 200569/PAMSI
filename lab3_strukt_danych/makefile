CPPFLAGS= -c -g -Iinc -fpermissive -std=c++11 -Wall -pedantic

__START__: st_kol_list
	./st_kol_list

st_kol_list: obj/main.o obj/Stoper.o obj/Lista.o obj/IProgram.o obj/ILista.o obj/Lista_Elem.o obj/Stos.o obj/IStos.o obj/Kolejka.o obj/IKolejka.o 
	g++ -o st_kol_list obj/main.o obj/Stoper.o obj/Lista.o obj/IProgram.o obj/ILista.o obj/Lista_Elem.o obj/Stos.o obj/IStos.o obj/Kolejka.o obj/IKolejka.o

obj/main.o: src/main.cpp src/Stoper.cpp inc/Lista.h inc/Stos.h 
	g++ ${CPPFLAGS} -o obj/main.o src/main.cpp

obj/Lista.o: src/Lista.cpp inc/Lista.h inc/ILista.h inc/IProgram.h inc/Lista_Elem.h
	g++ ${CPPFLAGS} -o obj/Lista.o src/Lista.cpp

obj/Lista_Elem.o: src/Lista_Elem.cpp inc/Lista_Elem.h
	g++ ${CPPFLAGS} -o obj/Lista_Elem.o src/Lista_Elem.cpp

obj/ILista.o: src/ILista.cpp inc/ILista.h inc/IProgram.h inc/Lista_Elem.h
	g++ ${CPPFLAGS} -o obj/ILista.o src/ILista.cpp

obj/Stos.o: src/Stos.cpp inc/Stos.h inc/IStos.h inc/IProgram.h
	g++ ${CPPFLAGS} -o obj/Stos.o src/Stos.cpp

obj/IStos.o: src/IStos.cpp inc/IStos.h
	g++ ${CPPFLAGS} -o obj/IStos.o src/IStos.cpp

obj/Kolejka.o: src/Kolejka.cpp inc/Kolejka.h inc/Kolejka.h inc/Kolejka.h
	g++ ${CPPFLAGS} -o obj/Kolejka.o src/Kolejka.cpp

obj/IKolejka.o: src/IKolejka.cpp inc/IKolejka.h
	g++ ${CPPFLAGS} -o obj/IKolejka.o src/IKolejka.cpp

obj/Stoper.o: src/Stoper.cpp inc/Stoper.h
	g++ ${CPPFLAGS} -o obj/Stoper.o src/Stoper.cpp

obj/IProgram.o: src/IProgram.cpp inc/IProgram.h
	g++ ${CPPFLAGS} -o obj/IProgram.o src/IProgram.cpp

clean:
	rm -f obj/*.o st_kol_list
