CXX = g++
OBJECTS = main.o gameMenu.o screen.o
LIB = -lsfml-graphics -lsfml-window -lsfml-system
main: main.o screen.o gameMenu.o
	g++  -o main $? $(LIB) -D LINUX
main.o: main.cpp screen.h
	g++ -c $? $(LIB) -D LINUX
screen.o: screen.cpp screen.h gameMenu.h
	g++ -c $? $(LIB) -D LINUX
gameMenu.o: gameMenu.cpp gameMenu.h screen.h
	g++ -c $? $(LIB) -D LINUX
.PHONY: clean
clean:
	-rm $(OBJECTS) *.h.gch
.PHONY: cleanall
cleanall:
	-rm $(OBJECTS) *.h.gch main
