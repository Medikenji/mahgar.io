// uielement.h

#ifndef UIELEMENT_H
#define UIELEMENT_H

#include <entity.h>

class UIElement : public Entity
{
public:
	UIElement(std::vector<struct UITextLine> lines);
	virtual ~UIElement();
	void update(float deltaTime);

private:
	std::vector<struct UITextLine> _lines;
};

#endif /* UIELEMENT_H */
