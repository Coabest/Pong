#include <SFML/Graphics.hpp>
#include "Collision.hpp"

class pad
{
public:
  int speed = 6;
  sf::Texture texture1, texture2;
  sf::Sprite sprite1, sprite2;

  sf::RectangleShape rectangle1, rectangle2;

  pad();
  void update();

};