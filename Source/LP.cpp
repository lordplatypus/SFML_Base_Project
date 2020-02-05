#include <SFML/Graphics.hpp>
#include <vector>
#include "/home/bryce/Documents/SFML/SFML_First_Project/Headers/Game.h"
#include "/home/bryce/Documents/SFML/SFML_First_Project/Headers/LP.h"
using namespace std;
using namespace sf;

int LP::key = -1; //creates keys to use in the below maps
stack<int> LP::thingsToDraw; //list of ints (keys) used to know what to draw
map<int, RectangleShape> LP::rectangleMap; //map of rectangles
map<int, CircleShape> LP::circleMap; //map of circles
map<int, Texture> LP::textureMap;
map<int, Sprite> LP::spriteMap;

LP::LP(){}

LP::~LP(){}


//Drawing Circles
int LP::SetCircle(int x, int y, int radius, sf::Color color)
{//create a new circle and add it to the circle map, return the key
    key++; //generate new key
    CircleShape temp; //create circle that will be added to the map
    temp.setRadius(radius); //set radius
    temp.setPosition(x, y); //set position
    temp.setFillColor(color); //set color
    circleMap[key] = temp; //add circle to the map
    return key; //return the key to the newly created circle
}

void LP::DrawCircle(int key)
{//adds circle to the list of objects to draw, no changes to the circle need to be made
    thingsToDraw.push(key);
}

void LP::DrawCircle(int x, int y, int radius, sf::Color color, int key)
{//adds circle to the list of objects to draw, changes are made to the circle before it is added to the list
    circleMap[key].setPosition(x, y); //change position
    circleMap[key].setRadius(radius); //change radius
    circleMap[key].setFillColor(color); //change color
    thingsToDraw.push(key);
}


//Drawing Rectangles
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
    rectangleMap[key].setPosition(x, y);
    rectangleMap[key].setSize(Vector2<float>(size, size));
    rectangleMap[key].setFillColor(color);
    thingsToDraw.push(key);
}


//Drawing Sprites
int LP::SetTexture(string filePath, int x, int y, int width, int height)
{
    key++;
    Texture temp;
    temp.loadFromFile(filePath, IntRect(x, y, width, height));
    textureMap[key] = temp;
    return key;
}

int LP::SetSprite(int x, int y, int textureKey)
{
    key++;
    Sprite temp;
    temp.setTexture(textureMap[textureKey]);
    temp.setPosition(x, y);
    spriteMap[key] = temp;
    return key;
}

void LP::DrawSprite(int x, int y, int key)
{
    spriteMap[key].setPosition(x, y);
    thingsToDraw.push(key);
}


//Draw
void LP::Draw(RenderWindow *window)
{
    if(thingsToDraw.size() > 0)
    {//as long as there are things to draw, run the below code
        int numOfThingsToDraw = thingsToDraw.size(); //save the num of things to draw
        for (int i = 0; i < numOfThingsToDraw; i++)
        {
            if (circleMap.find(thingsToDraw.top()) != circleMap.end())
            {//if the circleMap contains the key draw the circle
                window->draw(circleMap[thingsToDraw.top()]);
            }
            else if (rectangleMap.find(thingsToDraw.top()) != rectangleMap.end())
            {//if the rectangleMap contains the key, draw the rectangle
                window->draw(rectangleMap[thingsToDraw.top()]);
            }
            else if (spriteMap.find(thingsToDraw.top()) != spriteMap.end())
            {
                window->draw(spriteMap[thingsToDraw.top()]);
            }
            thingsToDraw.pop(); //remove the key from the list
        }
    }
}