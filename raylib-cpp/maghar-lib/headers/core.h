// core.h

#include <raylib.h>

#include "rescourcemanager.h"
#include "config.h"
#include "scene.h"

#ifndef CORE_H
#define CORE_H

class Core
{
public:
	Core();
	virtual ~Core();
	void runScene(Scene *scene);

private:
	float _deltaTime;
};

#endif /* CORE_H */
