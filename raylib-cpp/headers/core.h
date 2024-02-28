// core.h
#include <raylib.h>

#include <scene.h>

#ifndef CORE_H
#define CORE_H

class Core
{
public:
	Core();
	virtual ~Core();
	void RunProgram(Scene *scene);

private:
	float _deltaTime;
};

#endif /* CORE_H */
