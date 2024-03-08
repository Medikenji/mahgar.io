#include "entity.h"

int Entity::_nextEID = 0;

Entity::Entity()
{
    _EID = _nextEID;   // Assign the next available entity ID
    _nextEID++;        // Increment the next available entity ID for the next entity
    position = {0, 0}; // Set the default position of the entity
    scale = {1, 1};    // Set the default scale of the entity
}

Entity::~Entity()
{
    // Destructor
}

void Entity::addChild(Entity *child)
{
    if (child->parent != nullptr)
    {
        perror("Child already has parent"); // Print an error message if the child already has a parent
    }
    child->parent = this;             // Set the parent of the child entity to this entity
    this->_children.push_back(child); // Add the child entity to the list of children
}

void Entity::removeChild(Entity *child)
{
    std::vector<Entity *>::iterator I = _children.begin();
    while (I != _children.end())
    {
        if ((*I)->_EID == child->_EID)
        {
            child->parent = nullptr; // Set the parent of the child entity to nullptr
            I = _children.erase(I);  // Remove the child entity from the list of children
        }
        else
        {
            ++I;
        }
    }
}

void Entity::deleteSelf()
{
    if (this->parent != nullptr)
    {
        this->parent->removeChild(this); // Remove this entity from its parent's list of children
    }
    _EID = -1;   // Set the entity ID to -1 to mark it as deleted
    delete this; // Delete the entity from memory
}