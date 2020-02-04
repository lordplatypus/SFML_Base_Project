#include <iostream>
#include <SFML/Graphics.hpp>
#include "/home/bryce/Documents/SFML/SFML_First_Project/Headers/LP.h"
#include "/home/bryce/Documents/SFML/SFML_First_Project/Headers/Playscene.h"
#include "/home/bryce/Documents/SFML/SFML_First_Project/Headers/Input.h"
using namespace sf;
using namespace std;

Playscene::Playscene()
{
    x = 0;
    y = 0;
    // circle.setRadius(100);
    // circle.setFillColor(Color::Green);
    // rectangleSize.x = 10;
    // rectangleSize.y = 10;
    // rectangle.setSize(rectangleSize);
    // rectangle.setFillColor(Color::Blue);
    // rectangle.setPosition(0, 300);
    circle = LP::SetCircle(x, y, 100, Color::Green);
    rectangle = LP::SetRectangle(rX, rY, 50, Color::Blue);
}

Playscene::~Playscene()
{
}

void Playscene::Init()
{
    
}

void Playscene::Update()
{
    if (Input::GetButtonDown(Keyboard::Left))
    {
        x -= 10;
    }
    else if (Input::GetButtonDown(Keyboard::Right))
    {
        x += 10;
    }
    if (Input::GetButtonDown(Keyboard::Up))
    {
        y -= 10;
    }
    else if (Input::GetButtonDown(Keyboard::Down))
    {
        y += 10;
    }

    rX += 1;
}

void Playscene::Draw()
{
    LP::DrawCircle(x, y, 100, Color::Green, circle);
    LP::DrawRectangle(rX, rY, 50, Color::Blue, rectangle);
}