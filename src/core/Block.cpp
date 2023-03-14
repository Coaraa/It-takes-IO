#include "Block.h"
#include "Enum.h"

Block::Block(int x, int y, BlockType type)
{
    tileX = x;
    tileY = y;
    this->type = type;
}

bool Block::isSolid()
{
    return false;
}

BlockType Block::getType() {
    return type;
}

void Block::power(PowerType type) 
{

}

void Block::update(const Player& p0,const Player& p1, Level& currentLevel)
{

}