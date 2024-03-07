// core.cpp

#include "core.h"

Core::Core()
{
    // Constructor
}

Core::~Core()
{
    // Destructor
}

void Core::runScene(Scene *scene)
{
    _deltaTime = GetFrameTime();  // Update delta time based on frame time
    scene->drawScene(_deltaTime); // Draw the provided scene with the updated delta time
}