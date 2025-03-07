game: Horse.o Race.o Main.o
	g++ -g Horse.o Race.o Main.o -o game

Main.o: Race.h Horse.h Main.cpp
	g++ -g -c Main.cpp

Horse.o: Horse.cpp Horse.h
	g++ -g -c Horse.cpp

Race.o: Race.h Horse.h Race.cpp
	g++ -g -c Race.cpp

clean:
	rm -f *.o game

run: game
	./game

debug: game
	gdb game
