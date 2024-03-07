// scene01.h

#ifndef SCENE01_H
#define SCENE01_H

#include <scene.h>
#include "blob.h"

class Scene01 : public Scene
{
public:
	Scene01(int SWIDTH, int SHEIGHT, char *title);
	virtual ~Scene01();
	void update(float deltaTime);

private:
	Blob *blob;
};

#endif /* SCENE01_H */