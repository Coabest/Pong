#include <SFML/Graphics.hpp>
#include "Collision.hpp"

class ball
{
public:
  bool goingRight = true;
  int speedX = 5, speedY = 5;
  sf::Texture texture, textureTest;
  sf::Sprite sprite;

  sf::CircleShape circle;

  ball();
  ball(sf::Vector2f, sf::Color);
  void update();

};