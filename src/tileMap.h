#include <iostream>
#include <SFML/Graphics.cpp>
#include "../lib/tmxparser.h"

class tileMap
{
public:
  sf::RenderTexture tileSet;
  sf::VertexArray tile;
  bool load(const std::string& filename,TmxMap* outMap);
  bool draw(sf::renderWindow window);



}