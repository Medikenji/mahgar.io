// uielement.cpp

#include "uielement.h"

UIElement::UIElement(std::vector<Entity *> children) : Entity()
{
	_player = nullptr;
	for (Entity *child : children)
	{
		Player *player = dynamic_cast<Player *>(child);
		if (player != nullptr)
		{
			_player = player;
			break;
		}
		else
		{
			perror("Player not found");
			return;
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
#if debug
	DrawFPS(Config::SWIDTH - 100, 5, 20, WHITE);
	DrawText(TextFormat("Size Increase: %i", _player->sizeincrease), 5, 5, 20, WHITE);
	DrawText(TextFormat("Player Size: %03.02f", _player->getSize()), 5, 25, 20, WHITE);
	DrawText(TextFormat("Player Speed: %03.02f", _player->getSpeed()), 5, 45, 20, WHITE);
#endif
}