// scene.cpp

#include "scene.h"

Scene::Scene(int SWIDTH, int SHEIGHT, char *title) : Entity()
{
	InitWindow(SWIDTH, SHEIGHT, title);
	Config::configure();
}

Scene::~Scene()
{
}

void Scene::drawScene(float deltaTime)
{
	BeginDrawing();
	update(deltaTime);
	EndDrawing();
}

void Scene::update(float deltaTime)
{
	DrawFPS(10, 10);
	for (Entity *child : this->children())
	{
		child->update(deltaTime);
	}
	ClearBackground(BLACK);
}