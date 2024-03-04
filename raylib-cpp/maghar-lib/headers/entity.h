// entity.h

#include <raylib.h>
#include <vector>

#ifndef ENTITY_H
#define ENTITY_H

class Entity
{
public:
	Entity();
	virtual ~Entity();
	virtual void update(float deltaTime) = 0;
	const std::vector<Entity *> &children() { return _children; };

private:
	std::vector<Entity *> _children;
};

#endif /* ENTITY_H */
