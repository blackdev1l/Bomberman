#pragma once
#include <SFML\Graphics.hpp>

class GameMenu
{
public:
  int creationMenu(sf::Vector2f &Dimensione);
  bool drawMenu(sf::RenderWindow &window);
private:
  sf::Texture texture;
  sf::Sprite background;
  sf::Font font;
  sf::Text scelta[4];
  sf::Event event;
};

