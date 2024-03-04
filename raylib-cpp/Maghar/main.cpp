#include <core.h>

int main()
{
    Core *core = new Core();

    Scene *scene = new Scene(Config::SWIDTH, Config::SHEIGHT, "Maghdar");

    while (!WindowShouldClose())
    {
        core->runScene(scene);
    }
    CloseWindow();
    return 0;
}
