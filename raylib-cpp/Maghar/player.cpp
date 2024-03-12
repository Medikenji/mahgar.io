// player.cpp

#include "player.h"

Player::Player() : Blob()
{
	this->_tag = "Player";
}

Player::~Player()
{
}

void Player::update(float deltaTime)
{
	Blob::update(deltaTime);
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
		this->_size += sizeincrease * deltaTime;
		break;
	case 264:
		this->_size -= sizeincrease * deltaTime;
		break;
	case 266:
		sizeincrease++;
		break;
	case 267:
		sizeincrease--;
		break;
#endif
	}
}