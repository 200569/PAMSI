CPPFLAGS= -c -g -Iinc -fpermissive -std=c++11 -Wall -pedantic

__START__: Tablica
	./Tablica

Tablica: obj/main.o obj/Tablica.o obj/Stoper.o obj/IProgram.o
	g++ -o Tablica obj/main.o obj/Tablica.o obj/Stoper.o obj/IProgram.o

obj/main.o: src/main.cpp inc/Tablica.h inc/Stoper.h inc/IProgram.h 
	g++ ${CPPFLAGS} -o obj/main.o src/main.cpp

obj/Tablica.o: src/Tablica.cpp inc/Tablica.h inc/IProgram.h 
	g++ ${CPPFLAGS} -o obj/Tablica.o src/Tablica.cpp

obj/Stoper.o: src/Stoper.cpp inc/Stoper.h inc/IProgram.h 
	g++ ${CPPFLAGS} -o obj/Stoper.o src/Stoper.cpp

obj/IProgram.o: src/IProgram.cpp inc/IProgram.h
	g++ ${CPPFLAGS} -o obj/IProgram.o src/IProgram.cpp

clean:
	rm -f obj/*.o Tablica
