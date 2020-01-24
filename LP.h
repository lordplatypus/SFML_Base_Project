#ifndef LP_H_
#define LP_H_
#include <SFML/Graphics.hpp>
#include <vector>
using namespace sf;
using namespace std;

class LP
{
public:
    LP();
    ~LP();
    static void DrawCircle(CircleShape circle);
    static void DrawCircle(CircleShape circle, int x, int y, Color color, int size);
    static void DrawRectangle(RectangleShape rectangle);
    static void Draw(RenderWindow *window);

private:
    static vector<CircleShape> circles;
    static vector<RectangleShape> rectangles;
};

#endif