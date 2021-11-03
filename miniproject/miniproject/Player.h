#pragma once
#include <SFML\Graphics.hpp>

class Player
{
public:
	Player(sf::RectangleShape player, float speed);
	
	void Update(float deltaTime);
	void Draw(sf::RenderWindow& window);

	//void SetPosition(float x, float y) { return body.setPosition(x, y); }
	//sf::Vector2f GetPosition() { return body.getPosition(); }
	float GetPositionX() { return player.getPosition().x; }
	float GetPositionY() { return player.getPosition().y; }
private:
	sf::RectangleShape player;
	float speed;
};
