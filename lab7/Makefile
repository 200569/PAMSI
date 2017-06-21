#
#  To sa opcje dla kompilacji
#
CXXFLAGS=-g -Iinc -Wall -pedantic

program: obj obj/main.o obj/Stoper.o obj/Quicksort.o obj/Tablica.o obj/Drzewo.o \
           
	g++ -Wall -pedantic -o program obj/main.o obj/Stoper.o\
                        obj/Quicksort.o obj/Tablica.o obj/Drzewo.o 

obj:
	mkdir obj

obj/main.o: src/main.cpp inc/Stoper.hh inc/Tablica.hh inc/Drzewo.hh
	g++ -c ${CXXFLAGS} -o obj/main.o src/main.cpp


obj/Stoper.o: src/Stoper.cpp inc/Stoper.hh 
	g++ -c ${CXXFLAGS} -o obj/Stoper.o src/Stoper.cpp

obj/Drzewo.o: src/Drzewo.cpp inc/Drzewo.hh 
	g++ -c ${CXXFLAGS} -o obj/Drzewo.o src/Drzewo.cpp

obj/Tablica.o: src/Tablica.cpp inc/Tablica.hh
	g++ -c ${CXXFLAGS} -o obj/Tablica.o src/Tablica.cpp

obj/Quicksort.o: src/Quicksort.cpp
	g++ -c ${CXXFLAGS} -o obj/Quicksort.o src/Quicksort.cpp

clean:
	rm -f obj/*.o program

