#include <raylib.h>

#include "rescourcemanager.h"
#include "config.h"
#include "scene.h"

#ifndef CORE_H
#define CORE_H

// Defines the core engine functionality, including scene management
class Core
{
public:
	Core();						 // Constructor
	virtual ~Core();			 // Virtual destructor for proper cleanup
	void runScene(Scene *scene); // Method to change and run scenes

private:
	float _deltaTime; // Stores time between frames, useful for animations and physics calculations
};

#endif /* CORE_H */