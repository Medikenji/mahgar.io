// uielement.h

#ifndef UIELEMENT_H
#define UIELEMENT_H

#include <entity.h>

/**
 * @brief The UIElement class represents a user interface element.
 *
 * This class inherits from the Entity class and provides functionality for updating the UI element.
 * It contains a vector of UITextLine structures that represent the lines of text in the UI element.
 */
class UIElement : public Entity
{
public:
	/**
	 * @brief Constructs a UIElement object with the given lines of text.
	 *
	 * @param lines The vector of UITextLine structures representing the lines of text in the UI element.
	 */
	UIElement(std::vector<struct UITextLine> lines);

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
	std::vector<struct UITextLine> _lines;
};

#endif /* UIELEMENT_H */
