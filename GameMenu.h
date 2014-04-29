#pragma once
#include <SFML\Graphics.hpp>
#include "Screen.h"
class GameMenu
{
public:
  int creationMenu(sf::Vector2f &Dimensione);
  Screen::Status drawMenu(sf::RenderWindow &window);
  sf::Texture texture;
  sf::Sprite background;
  sf::Font font;
  sf::Text scelta[4];
  sf::Event event;
};

