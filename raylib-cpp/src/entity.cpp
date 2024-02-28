// entity.cpp

#include <entity.h>

Entity::Entity()
{
    static int _nextID = 0;
    _ID = _nextID++;
    _nextID++;
    position = {0, 0};
}

Entity::~Entity()
{
}