#include <core.h>
#include "scene01.h"

int main()
{
    // Create a new instance of the Core class
    Core *core = new Core();

    // Create a new instance of the Scene01 class
    Scene01 *scene = new Scene01(Config::SWIDTH, Config::SHEIGHT, (char *)"Maghdar");

    // Run the game loop until the window is closed
    while (!WindowShouldClose())
    {
        // Run the current scene
        core->runScene(scene);
    }

    // Close the window
    CloseWindow();

    // Return 0 to indicate successful execution
    return 0;
}
