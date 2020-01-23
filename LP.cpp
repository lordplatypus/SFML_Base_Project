#include <SFML/Graphics.hpp>
#include <vector>
#include "Game.h"
#include "LP.h"
using namespace sf;

LP::LP()
{
}

LP::~LP()
{
}

void LP::DrawCircle(CircleShape circle)
{
    circles.push_back(circle);
}

void LP::DrawCircle(CircleShape circle, int x, int y, Color color, int size)
{
    circle.setRadius(size);
    circle.setFillColor(color);
    circle.setPosition(x, y);
    circles.push_back(circle);
}

void LP::DrawRectangle(RectangleShape rectangle)
{
    rectangles.push_back(rectangle);
}

void LP::Draw(RenderWindow *window)
{
    if (circles.size() > 0)
    {
        for (int i = 0; i < circles.size(); i++)
        {
            window->draw(circles[i]);
            circles.pop_back();
        }
    }
    if (rectangles.size() > 0)
    {
        for (int i = 0; i < rectangles.size(); i++)
        {
            window->draw(rectangles[i]);
            rectangles.pop_back();
        }
    }
}