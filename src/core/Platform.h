#ifndef _PLATFORM_H
#define _PLATFORM_H

#include "Block.h"

class Platform : public Block
{
    public :
        bool isSolid() override;
        Platform(int x, int y, BlockType type = PLATFORM);
}; 


#endif