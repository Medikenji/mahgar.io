// uielement.h

#ifndef UIELEMENT_H
#define UIELEMENT_H

#include <entity.h>
#include "blob.h"
#include "player.h"

/**
 * @brief The UIElement class represents a user interface element.
 *
 * This class is derived from the Entity class and provides functionality for managing UI elements.
 * It contains methods for updating the element and drawing its statistics.
 */
class UIElement : public Entity
{
public:
	/**
	 * @brief Constructs a UIElement object with the specified children.
	 *
	 * @param children A vector of Entity pointers representing the children of the UI element.
	 */
	UIElement(std::vector<Entity *> children);

	/**
	 * @brief Destroys the UIElement object.
	 */
	virtual ~UIElement();

	/**
	 * @brief Updates the UI element.
	 *
	 * @param deltaTime The time elapsed since the last update.
	 */
	void update(float deltaTime);

private:
	/**
	 * @brief Draws the statistics of the UI element.
	 */
	void drawStats();

	/**
	 * @brief Draws the debug statistics of the UI element.
	 */
	void debugDrawStats();

	Player *_player;
};

#endif /* UIELEMENT_H */
