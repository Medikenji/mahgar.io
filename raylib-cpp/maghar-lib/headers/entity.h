#include <raylib.h>
#include <vector>
#include <iostream>
#include "config.h"

#ifndef ENTITY_H
#define ENTITY_H

// Defines a base class for all entities in the game.
// Entities could be players, enemies, or any object in the game world.
class Entity
{
public:
	// Constructor
	Entity();
	// Virtual destructor to support polymorphism
	virtual ~Entity();
	// Pure virtual function for updating the entity each frame
	virtual void update(float deltaTime) = 0;
	// Adds a child entity to this entity
	void addChild(Entity *child);
	// Removes a child entity from this entity
	void removeChild(Entity *child);
	// Returns a reference to the list of child entities
	const std::vector<Entity *> &children() { return _children; };
	// Position of the entity in the game world
	Vector2 position;
	// Scale of the entity, for sizing in the game world
	Vector2 scale;

private:
	// List of child entities attached to this entity
	std::vector<Entity *> _children;
	// Unique identifier for the entity
	int _EID;
	// Static variable to track the next available unique identifier
	static int _nextEID;
	// Pointer to the parent entity, if any
	Entity *_parent;
};

#endif /* ENTITY_H */