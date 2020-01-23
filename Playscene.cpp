#include <iostream>
#include <SFML/Graphics.hpp>
#include "LP.h"
#include "Playscene.h"
using namespace sf;
using namespace std;

Playscene::Playscene(LP* lp) : lp {lp}
{
    x = 0;
    y = 0;
    circle.setRadius(100);
    circle.setFillColor(Color::Green);
    rectangleSize.x = 10;
    rectangleSize.y = 10;
    rectangle.setSize(rectangleSize);
    rectangle.setFillColor(Color::Blue);
    rectangle.setPosition(0, 300);
}

Playscene::~Playscene()
{
    cout << "Playscene destroyed" << endl;
}

// Scene::~Scene()
// {
    
// }

void Playscene::Init()
{
    
}

void Playscene::Update()
{
    if (Keyboard::isKeyPressed(Keyboard::Left))
    {
        x -= 10;
    }
    else if (Keyboard::isKeyPressed(Keyboard::Right))
    {
        x += 10;
    }
    if (Keyboard::isKeyPressed(Keyboard::Up))
    {
        y -= 10;
    }
    else if (Keyboard::isKeyPressed(Keyboard::Down))
    {
        y += 10;
    }
    circle.setPosition(x, y);
}

void Playscene::Draw()
{
    lp->DrawCircle(circle);
    lp->DrawRectangle(rectangle);
}