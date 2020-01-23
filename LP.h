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
    void DrawCircle(CircleShape circle);
    void DrawCircle(CircleShape circle, int x, int y, Color color, int size);
    void DrawRectangle(RectangleShape rectangle);
    void Draw(RenderWindow *window);

private:
    vector<CircleShape> circles;
    vector<RectangleShape> rectangles;
};

#endif