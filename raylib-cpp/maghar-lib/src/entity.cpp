// entity.cpp

#include "entity.h"

int Entity::_nextEID = 0; // Static variable for tracking the next entity ID

Entity::Entity()
{
    _EID = _nextEID;   // Assign a unique entity ID
    _nextEID++;        // Prepare the next ID for future entities
    position = {0, 0}; // Initialize position to origin
    scale = {1, 1};    // Initialize scale to 1x for both dimensions
}

Entity::~Entity()
{
    // Destructor left intentionally blank
}

void Entity::addChild(Entity *child)
{
    if (child->_parent != nullptr) // Ensure the child does not already have a parent
    {
        perror("Child already has parent"); // Print an error if the child has a parent
    }
    child->_parent = this;            // Set the current object as the child's parent
    this->_children.push_back(child); // Add the child to this object's list of children
}

void Entity::removeChild(Entity *child)
{
    std::vector<Entity *>::iterator I = _children.begin(); // Iterator for traversing the children list
    while (I != _children.end())                           // Loop through all children
    {
        if ((*I)->_EID == child->_EID) // If the current child is the one to remove
        {
            child->_parent = nullptr; // Remove its parent reference
            I = _children.erase(I);   // Erase the child from the list and update the iterator
        }
        else
        {
            ++I; // Move to the next child if not the one to remove
        }
    }
}