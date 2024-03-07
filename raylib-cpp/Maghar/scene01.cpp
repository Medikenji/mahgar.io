// scene01.cpp

#include "scene01.h"

Scene01::Scene01(int SWIDTH, int SHEIGHT, char *title) : Scene(SWIDTH, SHEIGHT, title)
{
	blob = new Blob();
	this->addChild(blob);
}

Scene01::~Scene01()
{
}

void Scene01::update(float deltaTime)
{
	ClearBackground(BLACK);
	Scene::update(deltaTime);
	DrawFPS(5, 5);
}
