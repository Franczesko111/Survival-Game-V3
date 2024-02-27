#pragma once
#include <raylib.h>

class Player
{
    public:
        Player();
        ~Player();
        void Draw();
        void Update();
    
    private:
        float x, y, timer;
        int scale, frame, input_x, input_y;

        Texture2D texture;
        Rectangle source;
        Rectangle dest;
        Vector2 origin;
        float rotation;

        void Animation(float timeleft, int startframe, int endframe);
};