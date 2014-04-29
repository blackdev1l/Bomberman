#include <SFML/Graphics.hpp>
#include <iostream>
#include "Screen.h"
#include "GameMenu.h"


int main()
{
  Screen screen;
  screen.createScreen();
  while(!Screen::EXIT)
  {
    screen.changeScreen();
  }

  return 0;
  
}