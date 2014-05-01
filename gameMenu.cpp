#ifdef LINUX
#include <SFML/Graphics.hpp>
#endif

#ifdef WIN32
#include <SFML\Graphics.hpp>
#endif
#include "gameMenu.h"
#include "screen.h"

int GameMenu::creationMenu(sf::Vector2f &Dimensione)
{

    if (!this->texture.loadFromFile("./Resource/backgroundMenu.png"))
        return EXIT_FAILURE;
    this->background.setTexture(this->texture);


	if(!this->font.loadFromFile("./Resource/arial.ttf"))
		return EXIT_FAILURE;

	this->scelta[0].setString("Nuova Partita");
	this->scelta[0].setPosition((float)Dimensione.x/2.5, (float)Dimensione.y/4);
  this->scelta[0].setColor(sf::Color::Magenta);
	this->scelta[1].setString("ScoreBoard");
	this->scelta[1].setPosition((float)Dimensione.x/2.5, (float)Dimensione.y/3);
	this->scelta[2].setString("Opzioni");
	this->scelta[2].setPosition((float)Dimensione.x/2.5, 250);
	this->scelta[3].setString("Esci");
	this->scelta[3].setPosition((float)Dimensione.x/2.5, (float)Dimensione.y/2);
	for (int i = 0; i < 4; i++)
	{
		this->scelta[i].setFont(font);
	}
}

Screen::Status GameMenu::drawMenu(sf::RenderWindow &window)
{
  int choice = 0; //scelta del menu.

  while(window.isOpen())
  {

    while(window.pollEvent(this->event))
    {
      if(event.type == sf::Event::Closed || ((event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::Escape)))
      {
        return Screen::EXIT;
      }

      else if(event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Down)
      {
        if(choice == 3)
          choice = -1; // forse troverò un modo migliore un giorno
        this->scelta[++choice].setColor(sf::Color::Magenta);
        if(choice != 0)
          this->scelta[choice-1].setColor(sf::Color::White);
        else
          this->scelta[3].setColor(sf::Color::White);
      }

      else if(event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Up)
      {
        if(choice == 0)
          choice = 4;
        this->scelta[--choice].setColor(sf::Color::Magenta);
        if(choice != 3)
          this->scelta[choice+1].setColor(sf::Color::White);
        else
          this->scelta[0].setColor(sf::Color::White);
      }

      else if(event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Return)
      {
        switch(choice)
        {
        case 0:
          return Screen::NEWGAME;
        case 1:
          return Screen::SCOREBOARD;
        case 2:
          return Screen::SETTINGS;
        case 3:
          return Screen::EXIT;
        }
      }
    }


    
    window.clear();

    window.draw(this->background);

	  for (int i = 0; i < 4; i++)
	  {
		  window.draw(this->scelta[i]);
	  }

    window.display();
  }
  
}
