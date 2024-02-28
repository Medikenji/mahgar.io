// entity.h
#include "config.h"
#include <vector>

#ifndef ENTITY_H
#define ENTITY_H

class Entity
{
public:
	Entity();
	virtual ~Entity();
	Vector2 position;
	std::vector<Entity *> children;
	virtual void update(float deltaTime) = 0;

private:
	int _ID;
};

#endif /* ENTITY_H */
