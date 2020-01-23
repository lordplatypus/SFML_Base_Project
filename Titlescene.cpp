#include <iostream>
#include "Titlescene.h"
#include "Playscene.h"
#include "Game.h"

Titlescene::Titlescene(LP* lp) : lp {lp}
{

}

Titlescene::~Titlescene()
{
    cout << "Destroyed Titlescene" << endl;
}

// Scene::~Scene()
// {}

void Titlescene::Init()
{

}

void Titlescene::Update()
{
    if (Keyboard::isKeyPressed(Keyboard::Z))
    {
        Game::ChangeScene(new Playscene(lp));
    }
}

void Titlescene::Draw()
{

}