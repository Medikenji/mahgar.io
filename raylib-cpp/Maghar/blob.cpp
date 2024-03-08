// blob.cpp

#include "blob.h"

Blob::Blob() : Entity()
{
	position = {Config::HSWIDTH, Config::HSHEIGHT};
	_size = 5;
}

Blob::~Blob()
{
}

void Blob::update(float deltaTime)
{
	if (_size > 300)
	{
		deleteSelf();
	}
	_speed = 75 - 0.2 * _size;
	if (IsKeyDown(KEY_W))
	{
		_velocity.y -= _speed;
	}
	if (IsKeyDown(KEY_S))
	{
		_velocity.y += _speed;
	}
	if (IsKeyDown(KEY_A))
	{
		_velocity.x -= _speed;
	}
	if (IsKeyDown(KEY_D))
	{
		_velocity.x += _speed;
	}
	if (IsKeyDown(KEY_SPACE))
	{
		_size += 5 * deltaTime;
	}
	manageMovement(deltaTime);
	clamp();
	DrawCircle(position.x, position.y, _size, RED);
}

void Blob::manageMovement(float deltaTime)
{
	position.x += _velocity.x * deltaTime;
	position.y += _velocity.y * deltaTime;
	_velocity.x *= 0.9 * deltaTime;
	_velocity.y *= 0.9 * deltaTime;
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