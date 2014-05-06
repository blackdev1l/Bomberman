#pragma once

#ifdef LINUX
#include <SFML/Graphics.hpp>
#endif

#ifdef WIN32
#include <SFML\Graphics.hpp>
#endif

#include "screen.h"
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

