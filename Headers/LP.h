#ifndef LP_H_
#define LP_H_
#include <SFML/Graphics.hpp>
#include <vector>
#include <stack>

class LP
{
public:
    LP();
    ~LP();
    static int SetCircle(int x, int y, int radius, sf::Color color);
    static void DrawCircle(int key);
    static void DrawCircle(int x, int y, int radius, sf::Color color, int key);
    static int SetRectangle(int x, int y, int size, sf::Color color);
    static void DrawRectangle(int key);
    static void DrawRectangle(int x, int y, int size, sf::Color color, int key);
    static void Draw(sf::RenderWindow *window);

private:
    static int key;
    static std::stack<int> thingsToDraw;

    static std::map<int, sf::CircleShape> circleMap;
    static std::map<int, sf::RectangleShape> rectangleMap; 
};

#endif