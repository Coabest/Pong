#include <iostream>

#include <SFML/Graphics.hpp>

#include "Collision.hpp"
#include "ball.hpp"
#include "pad.hpp"

int main()
{
  sf::RenderWindow window( sf::VideoMode(800,600), "P O N G !");
  window.setPosition(sf::Vector2i(300,200));
  window.setFramerateLimit(30);

  sf::Event event;

  sf::Clock clock;
  sf::Time time;

  sf::Texture test;
  test.loadFromFile("pongBalls.png");
  sf::Sprite sptest;
  sptest.setTexture(test);






  int movespeedX = 5, movespeedY = 5;

  ball b1(sf::Vector2f(400,300),sf::Color::Red);
  /*ball b2(sf::Vector2f(200,250),sf::Color::Red);
  ball b3(sf::Vector2f(100,500),sf::Color::Red);
  ball b4(sf::Vector2f(500,100),sf::Color::Red);
  ball b5(sf::Vector2f(295,50),sf::Color::Red);
  ball b6(sf::Vector2f(590,350),sf::Color::Red);
  ball b7(sf::Vector2f(170,560),sf::Color::Red);
  ball b8(sf::Vector2f(380,200),sf::Color::Red);*/

  pad p1;

  while(window.isOpen())
  {
    while (window.pollEvent(event))
    {
      switch(event.type)
      {
        case sf::Event::Closed:
          window.close();
          break;
        case sf::Event::KeyPressed:
          if(event.key.code == sf::Keyboard::Escape)
            window.close();
          break;
      }
    }

    time = clock.getElapsedTime(); 
    if (Collision::PixelPerfectTest(b1.sprite, p1.sprite1) && b1.goingRight )
    {
      if ( time.asSeconds() > (2.f) )
      {
        b1.speedX*=(-1);
        clock.restart();
      }
    }

    b1.update();
    /*b2.update();
    b3.update();
    b4.update();
    b5.update();
    b6.update();
    b7.update();
    b8.update();*/

    p1.update();



    window.clear(sf::Color::Black);

    window.draw(p1.sprite1);
    window.draw(p1.sprite2);

    window.draw(b1.sprite);
    /*window.draw(b2.circle);
    window.draw(b3.circle);
    window.draw(b4.circle);
    window.draw(b5.circle);
    window.draw(b6.circle);
    window.draw(b7.circle);
    window.draw(b8.circle);*/

    window.draw(sptest);

    window.display();
    
  }


  return 0;
}