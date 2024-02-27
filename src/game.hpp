#pragma once
#include <raylib.h>
#include "player.hpp"

class Game
{
    public:
        Game();
        ~Game();
        void Draw();
        void Update();
    
    private:
        Player player;
};