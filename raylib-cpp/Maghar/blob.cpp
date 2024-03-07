// blob.cpp

#include "blob.h"

Blob::Blob() : Entity()
{
	position = {Config::HSWIDTH, Config::HSHEIGHT};
	std::cout << position.x << std::endl;
}

Blob::~Blob()
{
}

void Blob::update(float deltaTime)
{
	DrawCircle(position.x, position.y, 5, RED);
}
