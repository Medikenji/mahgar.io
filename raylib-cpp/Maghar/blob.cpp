#include "blob.h"

Blob::Blob() : Entity()
{
	position = {Config::HSWIDTH, Config::HSHEIGHT};
	_size = Config::SWIDTH / 200;
}

Blob::~Blob()
{
}

void Blob::update(float deltaTime)
{
	calculateSpeed();
	manageMovement(deltaTime);
	clamp();
	DrawCircle(position.x, position.y, (int)_size, RED);
}

void Blob::manageMovement(float deltaTime)
{
	if (_velocity.x != 0 && _velocity.y != 0)
	{
		_velocity.x /= 1.4142;
		_velocity.y /= 1.4142;
	}
	position.x += _velocity.x * deltaTime;
	position.y += _velocity.y * deltaTime;
	_velocity.x *= 0;
	_velocity.y *= 0;
}

void Blob::calculateSpeed()
{
	_speed = 500 / pow(_size, 0.3);
}

void Blob::clamp()
{
	if (position.x < 0 + _size)
	{
		position.x = 0 + _size;
	}
	if (position.x > Config::SWIDTH - _size)
	{
		position.x = Config::SWIDTH - _size;
	}
	if (position.y < 0 + _size)
	{
		position.y = 0 + _size;
	}
	if (position.y > Config::SHEIGHT - _size)
	{
		position.y = Config::SHEIGHT - _size;
	}
}