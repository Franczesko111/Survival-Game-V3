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
}

void Game::Update()
{
    player.Update();
}