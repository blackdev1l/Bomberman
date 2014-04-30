CXX = g++
OBJECTS = main.o gameMenu.o screen.o
LIB = -lsfml-graphics -lsfml-window -lsfml-system
main: main.o screen.o gameMenu.o
	g++  -o main $? $(LIB)
main.o: main.cpp screen.h
	g++ -c $? $(LIB)
screen.o: screen.cpp screen.h gameMenu.h
	g++ -c $? $(LIB)
gameMenu.o: gameMenu.cpp gameMenu.h screen.h
	g++ -c $? $(LIB)Chapter 2. Chapter 2. Chapter 2. Chapter 2. Chapter 2. 

.PHONY: clean
clean:
	-rm $(OBJECTS) *.h.gch
