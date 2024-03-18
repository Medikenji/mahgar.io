#include <raylib.h>
#include <vector>
#include <math.h>
#include "config.h"

#ifndef ENTITY_H
#define ENTITY_H

/**
 * @class Entity
 * @brief Represents an entity in the game world.
 *
 * The Entity class serves as a base class for all entities in the game world.
 * It provides common functionality such as updating, managing children entities,
 * and storing position and scale information.
 */
/**
 * @brief The Entity class represents a game entity.
 *
 * An entity is an object in a game that can have a position, scale, and other properties.
 * It can also have child entities, which are positioned relative to the parent entity.
 * The Entity class provides methods for updating the entity's state, adding and removing child entities,
 * and accessing information about the entity.
 */
class Entity
{
public:
	/**
	 * @brief Default constructor for the Entity class.
	 */
	Entity();

	/**
	 * @brief Virtual destructor for the Entity class.
	 */
	virtual ~Entity();

	/**
	 * @brief Updates the entity's state.
	 *
	 * This method is called every frame to update the entity's state based on the elapsed time.
	 *
	 * @param deltaTime The time elapsed since the last frame, in seconds.
	 */
	virtual void update(float deltaTime) = 0;

	/**
	 * @brief Adds a child entity to this entity.
	 *
	 * This method adds the specified entity as a child of this entity. The child entity's position
	 * and scale will be relative to this entity.
	 *
	 * @param child A pointer to the child entity to add.
	 */
	void addChild(Entity *child);

	/**
	 * @brief Removes a child entity from this entity.
	 *
	 * This method removes the specified entity from the list of children of this entity.
	 *
	 * @param child A pointer to the child entity to remove.
	 */
	void removeChild(Entity *child);

	/**
	 * @brief Gets the list of child entities.
	 *
	 * This method returns a constant reference to the list of child entities of this entity.
	 *
	 * @return A constant reference to the list of child entities.
	 */
	const std::vector<Entity *> &children() { return _children; };

	/**
	 * @brief Gets the tag of the entity.
	 *
	 * This method returns a pointer to the tag of the entity.
	 *
	 * @return A pointer to the tag of the entity.
	 */
	uint8_t tag() { return _tag; }

	/**
	 * @brief Gets the entity ID.
	 *
	 * This method returns the ID of the entity.
	 *
	 * @return The ID of the entity.
	 */
	int getEID() { return _EID; }

	/**
	 * @brief Deletes the entity.
	 *
	 * This method deletes the entity and removes it from its parent entity (if any).
	 */
	void deleteSelf();

	Vector2 position; ///< The position of the entity.
	Vector2 scale;	  ///< The scale of the entity.
	Entity *parent;	  ///< The parent entity of this entity.

	/*####################################################################################################*/

	struct UITextLine
	{
		const char *text;
		union
		{
			float *fvariable;
			int *ivariable;
		};
		float fontSize;
		Vector2 position;
		Color color;
	};

	/*####################################################################################################*/
private:
	std::vector<Entity *> _children; ///< The list of child entities.
	int _EID;						 ///< The ID of the entity.
	static int _nextEID;			 ///< The next available entity ID.

protected:
	uint8_t _tag; ///< The tag of the entity.
	std::vector<UITextLine> _lines;
};

#endif /* ENTITY_H */