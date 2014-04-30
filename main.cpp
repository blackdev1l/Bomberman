#ifdef LINUX
#include <SFML/Graphics.hpp>
#endif

#ifdef WIN32
#include <SFML\Graphics.hpp>
#endif

#include <iostream>
#include "screen.h"

int main(int argc, char const *argv[])
{
  Screen screen;
  screen.createScreen();
  while(!Screen::EXIT)
  {
    screen.changeScreen();
  }

  return 0;

}