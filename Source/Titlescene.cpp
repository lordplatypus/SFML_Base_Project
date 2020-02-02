#include <iostream>
#include "/home/bryce/Documents/SFML/SFML_First_Project/Headers/Titlescene.h"
#include "/home/bryce/Documents/SFML/SFML_First_Project/Headers/Playscene.h"
#include "/home/bryce/Documents/SFML/SFML_First_Project/Headers/Game.h"

Titlescene::Titlescene()
{

}

Titlescene::~Titlescene()
{
}

void Titlescene::Init()
{

}

void Titlescene::Update()
{
    if (Keyboard::isKeyPressed(Keyboard::Z))
    {
        Game::ChangeScene(new Playscene());
    }
}

void Titlescene::Draw()
{

}