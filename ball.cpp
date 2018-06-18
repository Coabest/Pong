#include "ball.hpp"

ball::ball()
{
	circle.setRadius(10.f);
	circle.setOrigin(sf::Vector2f(5.f, 5.f));
  circle.setPosition(400,300);
  circle.setFillColor(sf::Color::Red);
}

ball::ball(sf::Vector2f start, sf::Color color)
{
	Collision::CreateTextureAndBitmask(textureTest, "pongBalls.png");

	texture.loadFromFile("pongBalls.png");
	sprite.setTexture(texture);
  sprite.setOrigin(10,10);
  sprite.setTextureRect(sf::IntRect( 0, 0, 20, 20));

	circle.setRadius(10.f);
	circle.setOrigin(sf::Vector2f(5.f, 5.f));
  circle.setPosition(start);
  circle.setFillColor(color);
}

void ball::update()
{
	sprite.setScale(circle.getScale());
	sprite.setPosition(circle.getPosition());
	circle.move(speedX,speedY);

  if ( circle.getPosition().x > 790 || circle.getPosition().x < 0)
    speedX*=(-1);
  if ( circle.getPosition().y > 590 || circle.getPosition().y < 0)
    speedY*=(-1);
}