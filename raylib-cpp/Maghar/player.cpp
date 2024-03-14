#include "player.h"

Player::Player() : Blob()
{
	setUpUI();
	_uiElement = new UIElement(_lines);
	this->addChild(_uiElement);
}

Player::~Player()
{
}

void Player::update(float deltaTime)
{
	Blob::update(deltaTime);
	_uiElement->update(deltaTime);
}

void Player::manageMovement(float deltaTime, int key)
{
	switch (key)
	{
	case 87:
		this->_velocity.y -= _speed;
		break;
	case 83:
		this->_velocity.y += _speed;
		break;
	case 65:
		this->_velocity.x -= _speed;
		break;
	case 68:
		this->_velocity.x += _speed;
		break;
#if debug
	case 265:
		this->_size += _sizeincrease * deltaTime;
		break;
	case 264:
		this->_size -= _sizeincrease * deltaTime;
		break;
	case 266:
		_sizeincrease++;
		break;
	case 267:
		_sizeincrease--;
		break;
#endif
	}
}
void Player::setUpUI()
{
#if debug
	UITextLine sizeincrease;
	sizeincrease.text = "Size increase: %03.0f";
	sizeincrease.variable = &_sizeincrease;
	sizeincrease.position = {10, 10};
	sizeincrease.fontSize = 20;
	sizeincrease.color = WHITE;
	_lines.push_back(sizeincrease);

	// size
	UITextLine size;
	size.text = "Size: %06.2f";
	size.variable = &_size;
	size.position = {10, 10};
	size.fontSize = 20;
	size.color = WHITE;
	_lines.push_back(size);

	// speed
	UITextLine speed;
	speed.text = "Speed: %05.1f";
	speed.variable = &_speed;
	speed.position = {10, 10};
	speed.fontSize = 20;
	speed.color = WHITE;
	_lines.push_back(speed);
#else
	UITextLine size;
	size.text = "Size: %03.0f";
	size.variable = &_size;
	size.position = {10, 10};
	size.fontSize = 20;
	size.color = WHITE;
	_lines.push_back(size);
#endif
}