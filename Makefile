all: cards.dll cards.a

cards.dll:  card.o  pack.o
	g++ -std=c++11 card.o pack.o -o cards.dll -s -shared

cards.a:   card.o  pack.o
	ar crf cards.a pack.o card.o 

card.o: card.cpp
	g++ -std=c++11 -c card.cpp
 
pack.o: pack.cpp
	g++ -std=c++11 -c pack.cpp

clean:
	rm -rf *.o cards.dll cards.a 

install:
	cp hello_alex.exe C:\Apache24\cgi-bin\