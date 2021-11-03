#include "Player.h"

Player::Player(sf::RectangleShape player,float speed)
{
	this->speed = speed;
	//player.setPosition(400.0f, 400.0f);
	
	
}

void Player::Update(float deltaTime)
{
	sf::Vector2f movement(0.0f, 0.0f);
	
	player.setFillColor(sf::Color::Green);

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{
		movement.x -= speed * deltaTime;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
	{
		movement.x += speed * deltaTime;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
	{
		movement.y -= speed * deltaTime;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
	{
		movement.y += speed * deltaTime;
	}
		
	player.move(movement);
}

void Player::Draw(sf::RenderWindow& window)
{
	window.draw(player);
}
