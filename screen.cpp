#include <SFML/Graphics.hpp>
#include "Screen.h"
#include "GameMenu.h"

void screen(bool &status)
{
  sf::Vector2f Dimensione(800,600);
  sf::RenderWindow window(sf::VideoMode(Dimensione.x,Dimensione.y), "Bomberman");
	window.setFramerateLimit(60);
  GameMenu menu;
  menu.creationMenu(Dimensione);
  if(menu.drawMenu(window) == 1)
    status = 1;

}