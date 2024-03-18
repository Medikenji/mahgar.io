// scene01.cpp

#include "scene01.h"

Scene01::Scene01(int SWIDTH, int SHEIGHT, char *title) : Scene(SWIDTH, SHEIGHT, title)
{
	ui = new UIElement(_lines);
	this->addChild(ui);
	player = new Player();
	this->addChild(player);
	// for (size_t i = 0; i < 100; i++)
	// {
	// 	_blobs.push_back(new Ploinc());
	// 	this->addChild(_blobs[i]);
	// }
}

Scene01::~Scene01()
{
}

void Scene01::update(float deltaTime)
{
	ClearBackground(BLACK);
#if show_fps
	DrawFPS(Config::SWIDTH - 100, 10, 20, GREEN);
#endif
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

void Scene01::setupUI()
{
}