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
    //Drawing Circles
    static int SetCircle(int x, int y, int radius, sf::Color color);
    static void DrawCircle(int key);
    static void DrawCircle(int x, int y, int radius, sf::Color color, int key);
    //Drawing Rectangles
    static int SetRectangle(int x, int y, int size, sf::Color color);
    static void DrawRectangle(int key);
    static void DrawRectangle(int x, int y, int size, sf::Color color, int key);
    //Drawing Sprites
    static int SetTexture(std::string filePath, int x, int y, int width, int height);
    static int SetSprite(int x, int y, int textureKey);
    static void DrawSprite(int x, int y, int key);
    //Draw
    static void Draw(sf::RenderWindow *window);

private:
    static int key;
    static std::stack<int> thingsToDraw;

    static std::map<int, sf::CircleShape> circleMap;
    static std::map<int, sf::RectangleShape> rectangleMap;
    static std::map<int, sf::Texture> textureMap;
    static std::map<int, sf::Sprite> spriteMap;
};

#endif