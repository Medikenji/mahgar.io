#ifndef SCENE_H
#define SCENE_H

#include "entity.h"
#include "config.h"

// Scene class represents a scene in the game
class Scene : public Entity
{
public:
    // Constructor
    Scene(int SWIDTH, int SHEIGHT, char *title);

    // Destructor
    virtual ~Scene();

    // Draw the scene
    void drawScene(float deltaTime);

    // Update the scene
    void update(float deltaTime);

private:
};

#endif /* SCENE_H */