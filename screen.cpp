#include <SFML/Graphics.hpp>
#include "Screen.h"
#include "GameMenu.h"

Screen::Status Screen::createScreen()
{
  Dimensione.x = 800;
  Dimensione.y = 600;
  sf::RenderWindow window(sf::VideoMode(Dimensione.x,Dimensione.y), "Bomberman");
	window.setFramerateLimit(60);
  GameMenu menu;
  menu.creationMenu(Dimensione);
  return menu.drawMenu(window);
}

Screen::Status Screen::changeScreen()
{
  if(status == Screen::EXIT)
  {
    this->window.close();
    return EXIT;
  }
}