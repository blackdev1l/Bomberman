#include <iostream>
#include <SFML/Graphics.cpp>
#include "tileMap.h"

/*           TODO list
    1)quadratini
    2)caricare i tile in ogni quadratino
    3) ????
    4) profit
    ------------
    scrivere la funzione load
    troppa roba dio cane
*/
bool load(const std::string& filename,TmxMap* outMap)
{
  tmxparser::TmxReturn error;
  tmxparser::TmxMap map;
  // test from file
  error = tmxparser::parseFromFile("example.tmx", &map);
  if (!tileSet.loadfromfile(filename))
    return 1;
  tile.setPrimitiveType(sf::Quads);
  tile.resize(map.tileWidth * map.tileHeight);



}