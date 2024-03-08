// uielement.h

#ifndef UIELEMENT_H
#define UIELEMENT_H

#include <entity.h>
#include "blob.h"

class UIElement : public Entity
{
public:
	UIElement(std::vector<Entity *> children);
	virtual ~UIElement();
	void update(float deltaTime);

private:
	void drawStats();
	void debugDrawStats();
	Blob *_player;
};

#endif /* UIELEMENT_H */
