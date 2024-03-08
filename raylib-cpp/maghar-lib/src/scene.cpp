#include "scene.h"

Scene::Scene(int SWIDTH, int SHEIGHT, char *title) : Entity()
{
	Config::configurePreInit();			// Configure pre-initialization settings
	InitWindow(SWIDTH, SHEIGHT, title); // Initialize the window with specified width, height, and title
	Config::configurePostInit();		// Configure post-initialization settings
}

Scene::~Scene()
{
}

void Scene::drawScene(float deltaTime)
{
	BeginDrawing();	   // Begin drawing the scene
	update(deltaTime); // Update the scene
	EndDrawing();	   // End drawing the scene
}

void Scene::update(float deltaTime)
{
	for (Entity *child : this->children()) // Iterate through each child entity
	{
		child->update(deltaTime);  // Update the child entity
		if (child->getEID() == -1) // Check if the child entity has been marked for deletion
		{
			child = nullptr; // Set the child entity pointer to null
		}
	}
}