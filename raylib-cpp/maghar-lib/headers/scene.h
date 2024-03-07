// scene.h

#ifndef SCENE_H
#define SCENE_H

#include "entity.h"
#include "config.h"

// Scene class inherits from Entity and represents a game scene.
class Scene : public Entity
{
public:
    // Constructor for creating a new scene with screen dimensions and title.
    Scene(int SWIDTH, int SHEIGHT, char *title);
    // Virtual destructor for proper cleanup.
    virtual ~Scene();
    // Method to draw the scene based on deltaTime.
    void drawScene(float deltaTime);
    // Updates the state of the scene.
    void update(float deltaTime);

private:
};

#endif /* SCENE_H */