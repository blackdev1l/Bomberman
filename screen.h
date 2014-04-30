#pragma once

#ifdef LINUX
#include <SFML/Graphics.hpp>
#endif

#ifdef WIN32
#include <SFML\Graphics.hpp>
#endif

class Screen
{
public:
  sf::Vector2f Dimensione;
  sf::Window window;
  enum Status { NOTHING = -1 , NEWGAME, SCOREBOARD,SETTINGS,EXIT};
  Status changeScreen();
  Status createScreen();
  Status status;
private:

};