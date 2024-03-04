// scene.h

#ifndef SCENE_H
#define SCENE_H

#include "entity.h"
#include "config.h"

class Scene : public Entity
{
public:
	Scene(int SWIDTH, int SHEIGHT, char *title);
	virtual ~Scene();
	void drawScene(float deltaTime);
	void update(float deltaTime);

private:
};

#endif /* SCENE_H */
