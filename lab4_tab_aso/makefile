CPPFLAGS= -c -g -Iinc -fpermissive -std=c++11 -Wall -pedantic

__START__: tab_aso
	./tab_aso

tab_aso: obj/main.o obj/Stoper.o obj/IProgram.o obj/Lista.o obj/ILista.o obj/Lista_Elem.o obj/ITablica_aso.o obj/Tablica_aso.o
	g++ -o tab_aso obj/main.o obj/Stoper.o obj/Lista.o obj/IProgram.o obj/ILista.o obj/Lista_Elem.o obj/ITablica_aso.o obj/Tablica_aso.o

obj/main.o: src/main.cpp inc/Tablica_aso.h inc/Lista.h inc/Stoper.h 
	g++ ${CPPFLAGS} -o obj/main.o src/main.cpp

obj/Tablica_aso.o: src/Tablica_aso.cpp inc/Lista.h inc/IProgram.h inc/ITablica_aso.h
	g++ ${CPPFLAGS} -o obj/Tablica_aso.o src/Tablica_aso.cpp

obj/ITablica_aso.o: src/ITablica_aso.cpp inc/ITablica_aso.h
	g++ ${CPPFLAGS} -o obj/ITablica_aso.o src/ITablica_aso.cpp

obj/Lista.o: src/Lista.cpp inc/Lista.h inc/ILista.h inc/IProgram.h inc/Lista_Elem.h
	g++ ${CPPFLAGS} -o obj/Lista.o src/Lista.cpp

obj/Lista_Elem.o: src/Lista_Elem.cpp inc/Lista_Elem.h
	g++ ${CPPFLAGS} -o obj/Lista_Elem.o src/Lista_Elem.cpp

obj/ILista.o: src/ILista.cpp inc/ILista.h inc/IProgram.h inc/Lista_Elem.h
	g++ ${CPPFLAGS} -o obj/ILista.o src/ILista.cpp

obj/Stoper.o: src/Stoper.cpp inc/Stoper.h
	g++ ${CPPFLAGS} -o obj/Stoper.o src/Stoper.cpp

obj/IProgram.o: src/IProgram.cpp inc/IProgram.h
	g++ ${CPPFLAGS} -o obj/IProgram.o src/IProgram.cpp

clean:
	rm -f obj/*.o tab_aso
