#include <raylib.h>
#include "game.hpp"

Game::Game()
{

}

Game::~Game()
{

}

void Game::Draw()
{
    player.Draw();
    DrawFPS(0, 0);
}

void Game::Update()
{
    player.Update();
}