// scene01.cpp

#include "scene01.h"

Scene01::Scene01(int SWIDTH, int SHEIGHT, char *title) : Scene(SWIDTH, SHEIGHT, title)
{
	player = new Player();
	this->addChild(player);
	uielement = new UIElement(this->children());
	this->addChild(uielement);
}

Scene01::~Scene01()
{
}

void Scene01::update(float deltaTime)
{
	ClearBackground(BLACK);
	Scene::update(deltaTime);
	manageInput(deltaTime);
}

void Scene01::manageInput(float deltaTime)
{
	if (IsKeyDown(KEY_W))
	{
		player->manageMovement(deltaTime, KEY_W);
	}
	if (IsKeyDown(KEY_S))
	{
		player->manageMovement(deltaTime, KEY_S);
	}
	if (IsKeyDown(KEY_A))
	{
		player->manageMovement(deltaTime, KEY_A);
	}
	if (IsKeyDown(KEY_D))
	{
		player->manageMovement(deltaTime, KEY_D);
	}
#if debug
	if (IsKeyDown(KEY_UP))
	{
		player->manageMovement(deltaTime, KEY_UP);
	}
	if (IsKeyDown(KEY_DOWN))
	{
		player->manageMovement(deltaTime, KEY_DOWN);
	}
	if (IsKeyPressed(KEY_PAGE_UP))
	{
		player->manageMovement(deltaTime, KEY_PAGE_UP);
	}
	if (IsKeyPressed(KEY_PAGE_DOWN))
	{
		player->manageMovement(deltaTime, KEY_PAGE_DOWN);
	}
#endif
}