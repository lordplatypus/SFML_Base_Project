#include <SFML/Graphics.hpp>
#include "Game.h"
#include "LP.h"
#include "Playscene.h"
#include "Titlescene.h"
using namespace sf;

Scene* Game::scene;

Game::Game(LP* lp) : lp {lp}
{
    scene = new Titlescene(lp);
    // x = 0;
    // y = 0;
    // circle.setRadius(100);
    // circle.setFillColor(Color::Green);
    // rectangleSize.x = 10;
    // rectangleSize.y = 10;
    // rectangle.setSize(rectangleSize);
    // rectangle.setFillColor(Color::Blue);
    // rectangle.setPosition(0, 300);
}

Game::~Game()
{

}

void Game::Init()
{
}

void Game::Update(Event* event)
{
    // if (Keyboard::isKeyPressed(Keyboard::Left))
    // {
    //     x -= 10;
    // }
    // else if (Keyboard::isKeyPressed(Keyboard::Right))
    // {
    //     x += 10;
    // }
    // if (Keyboard::isKeyPressed(Keyboard::Up))
    // {
    //     y -= 10;
    // }
    // else if (Keyboard::isKeyPressed(Keyboard::Down))
    // {
    //     y += 10;
    // }
    // circle.setPosition(x, y);
    scene->Update();
}

void Game::Draw()
{
    // lp->DrawCircle(circle);
    // lp->DrawRectangle(rectangle);
    scene->Draw();
}

void Game::ChangeScene(Scene* newScene)
{
    scene = newScene;
}