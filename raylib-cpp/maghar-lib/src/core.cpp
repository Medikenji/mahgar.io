// core.cpp

#include "core.h"

Core::Core()
{
}

Core::~Core()
{
}

void Core::runScene(Scene *scene)
{
    _deltaTime = GetFrameTime();
    scene->drawScene(_deltaTime);
}