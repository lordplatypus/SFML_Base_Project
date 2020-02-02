#include <SFML/Graphics.hpp>
#include <vector>
#include "/home/bryce/Documents/SFML/SFML_First_Project/Headers/Game.h"
#include "/home/bryce/Documents/SFML/SFML_First_Project/Headers/LP.h"
using namespace std;
using namespace sf;

int LP::key = -1;
stack<int> LP::thingsToDraw;
map<int, RectangleShape> LP::rectangleMap;
map<int, CircleShape> LP::circleMap;

LP::LP()
{
}

LP::~LP()
{
}

int LP::SetCircle(int x, int y, int radius, sf::Color color)
{
    key++;
    CircleShape temp;
    temp.setRadius(radius);
    temp.setPosition(x, y);
    temp.setFillColor(color);
    circleMap[key] = temp;
    return key;
}

void LP::DrawCircle(int key)
{
    thingsToDraw.push(key);
}

void LP::DrawCircle(int x, int y, int radius, sf::Color color, int key)
{
    CircleShape* temp;
    temp = &circleMap[key];
    temp->setPosition(x, y);
    temp->setRadius(radius);
    temp->setFillColor(color);
    thingsToDraw.push(key);
}

int LP::SetRectangle(int x, int y, int size, sf::Color color)
{
    key++;
    RectangleShape temp;
    temp.setSize(Vector2<float>(size, size));
    temp.setPosition(x, y);
    temp.setFillColor(color);
    rectangleMap[key] = temp;
    return key;
}

void LP::DrawRectangle(int key)
{
    thingsToDraw.push(key);
}

void LP::DrawRectangle(int x, int y, int size, sf::Color color, int key)
{
    RectangleShape* temp;
    temp = &rectangleMap[key];
    temp->setPosition(x, y);
    temp->setSize(Vector2<float>(size, size));
    temp->setFillColor(color);
    thingsToDraw.push(key);
}

void LP::Draw(RenderWindow *window)
{
    if(thingsToDraw.size() > 0)
    {
        int numOfThingsToDraw = thingsToDraw.size();
        for (int i = 0; i < numOfThingsToDraw; i++)
        {
            if (circleMap.find(thingsToDraw.top()) != circleMap.end())
            {
                window->draw(circleMap[thingsToDraw.top()]);
            }
            else if (rectangleMap.find(thingsToDraw.top()) != rectangleMap.end())
            {
                window->draw(rectangleMap[thingsToDraw.top()]);
            }
            thingsToDraw.pop();
        }
    }
}