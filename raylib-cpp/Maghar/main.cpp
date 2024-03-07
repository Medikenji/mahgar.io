#include <core.h>
#include "scene01.h"

int main()
{
    Core *core = new Core();

    Scene01 *scene = new Scene01(Config::SWIDTH, Config::SHEIGHT, (char *)"Maghdar");
    // Config::configure();

    while (!WindowShouldClose())
    {
        core->runScene(scene);
    }
    CloseWindow();
    return 0;
}
