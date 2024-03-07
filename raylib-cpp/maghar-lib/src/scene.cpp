// scene.cpp

#include "scene.h"

// Constructor initializing the scene with specified width, height, and title
Scene::Scene(int SWIDTH, int SHEIGHT, char *title) : Entity()
{
	Config::configurePreInit();
	InitWindow(SWIDTH, SHEIGHT, title); // Initialize the window with given dimensions and title
	Config::configurePostInit();		// Apply configuration settings
}

// Destructor for the Scene class
Scene::~Scene()
{
}

// Function to draw the scene and update it based on deltaTime
void Scene::drawScene(float deltaTime)
{
	BeginDrawing();	   // Begin the drawing process
	update(deltaTime); // Update the scene with the time difference
	EndDrawing();	   // End the drawing process
}

// Function to update each entity within the scene
void Scene::update(float deltaTime)
{
	for (Entity *child : this->children()) // Iterate over each child entity of the scene
	{
		child->update(deltaTime); // Update each child entity with the time difference
	}
}