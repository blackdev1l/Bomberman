#pragma once
#include <SFML/Graphics.hpp>

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