// uielement.cpp

#include "uielement.h"

UIElement::UIElement(std::vector<Entity *> children) : Entity()
{
	for (Entity *child : children)
	{
		Blob *blob = dynamic_cast<Blob *>(child);
		if (blob != nullptr)
		{
			_player = blob;
			break;
		}
	}
}

UIElement::~UIElement()
{
}

void UIElement::update(float deltaTime)
{
#if debug
	debugDrawStats();
#else
	drawStats();
#endif
}

void UIElement::drawStats()
{
	DrawText(TextFormat("Size: %i", (int)_player->getSize()), 5, 5, 20, WHITE);
}

void UIElement::debugDrawStats()
{
	DrawFPS(5, 5, 20, WHITE);
	DrawText(TextFormat("Player Size: %f", _player->getSize()), 5, 25, 20, WHITE);
	DrawText(TextFormat("Player Speed: %f", _player->getSpeed()), 5, 45, 20, WHITE);
}