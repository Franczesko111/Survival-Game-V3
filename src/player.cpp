#include <raylib.h>
#include "player.hpp"

Player::Player()
{
    width = 36;
    height = 56;
    x = GetScreenWidth() / 2 - width / 2;
    y = GetScreenHeight() / 2 - height / 2;
}

Player::~Player()
{

}

void Player::Draw()
{
    DrawRectangle(x, y, width, height, RED);
}

void Player::Update()
{
    x += (IsKeyDown(KEY_D) - IsKeyDown(KEY_A)) * 5;
    y += (IsKeyDown(KEY_S) - IsKeyDown(KEY_W)) * 5;
}