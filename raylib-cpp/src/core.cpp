// core.cpp

#include <core.h>

Core::Core()
{
    _deltaTime = 0;
}

Core::~Core()
{
}

void Core::RunProgram(Scene *scene)
{
    _deltaTime = GetFrameTime();
    scene->update(_deltaTime);
}