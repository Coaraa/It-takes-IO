#include <iostream>
#include "Entity.h"
#include "Level.h"

Entity::Entity(int x, int y, int height, int width)
{
    this->x = x;
    this->y = y;
    this->height = height;
    this->width = width;
}

int Entity::getX() const
{
    return x;
}

int Entity::getY() const
{
    return y;
}

void Entity::setPosition(int x, int y)
{
    this->x = x;
    this->y = y;
}
