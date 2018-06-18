#include "pad.hpp"

pad::pad()
{
  // Left pad
  rectangle1.setSize(sf::Vector2f(10.f, 50.f));
  rectangle1.setOrigin(sf::Vector2f(5.f, 25.f));
  rectangle1.setPosition(15,300);
  rectangle1.setFillColor(sf::Color::Blue);

  Collision::CreateTextureAndBitmask(texture1, "pongPads.png");
  sprite1.setTexture(texture1);
  sprite1.setOrigin(10,50);
  sprite1.setTextureRect(sf::IntRect( 0, 0, 20, 100));
  sprite1.setScale(0.5, 0.5);
  Collision::CreateTextureAndBitmask(texture1, "pongPads.png");
  sprite1.setTexture(texture1);
  sprite1.setOrigin(10,50);
  sprite1.setTextureRect(sf::IntRect( 0, 0, 20, 100));
  sprite1.setScale(0.5, 0.5);

  // Right pad
  rectangle2.setSize(sf::Vector2f(10.f, 50.f));
  rectangle2.setOrigin(sf::Vector2f(5.f, 25.f));
  rectangle2.setPosition(785,300);
  rectangle2.setFillColor(sf::Color::Green);

  Collision::CreateTextureAndBitmask(texture2, "pongPads.png");
  sprite2.setTexture(texture2);
  sprite2.setOrigin(10,50);
  sprite2.setTextureRect(sf::IntRect( 0, 100, 20, 100));
  sprite2.setScale(0.5, 0.5);
  Collision::CreateTextureAndBitmask(texture2, "pongPads.png");
  sprite2.setTexture(texture2);
  sprite2.setOrigin(10,50);
  sprite2.setTextureRect(sf::IntRect( 0, 100, 20, 100));
  sprite2.setScale(0.5, 0.5);
}

void pad::update()
{
  sprite1.setPosition(rectangle1.getPosition());

  sprite2.setPosition(rectangle2.getPosition());




  // Left pad
  if (sf::Keyboard::isKeyPressed(sf::Keyboard::W) &&
      rectangle1.getPosition().y > 30)
    rectangle1.move(0,-speed);
  if (sf::Keyboard::isKeyPressed(sf::Keyboard::S) &&
      rectangle1.getPosition().y < 570)
    rectangle1.move(0,speed);

  // Right pad
  if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up) &&
      rectangle2.getPosition().y > 30)
    rectangle2.move(0,-speed);
  if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down) &&
      rectangle2.getPosition().y < 570)
    rectangle2.move(0,speed);

}