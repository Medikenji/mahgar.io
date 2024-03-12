// Include necessary headers
#include <raylib.h>
#include <vector>
#include <math.h>
#include "config.h"

#ifndef ENTITY_H
#define ENTITY_H

// Entity class definition
class Entity
{
public:
	// Constructor and destructor
	Entity();
	virtual ~Entity();

	// Pure virtual function for updating the entity
	virtual void update(float deltaTime) = 0;

	// Functions for managing child entities
	void addChild(Entity *child);
	void removeChild(Entity *child);
	const std::vector<Entity *> &children() { return _children; };
	char *tag() { return _tag; }

	// Getter for entity ID
	int getEID() { return _EID; }

	// Function for deleting the entity
	void deleteSelf();

	// Entity properties
	Vector2 position;
	Vector2 scale;
	Entity *parent;

private:
	// Private member variables
	std::vector<Entity *> _children;
	int _EID;
	static int _nextEID;

protected:
	char *_tag;
};

#endif /* ENTITY_H */