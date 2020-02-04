#ifndef PLAYSCENE_H_
#define PLAYSCENE_H_
#include <SFML/Graphics.hpp>
#include "LP.h"
#include "Scene.h"
using namespace sf;
using namespace std;

class Playscene : public Scene
{
public:
    Playscene();
    ~Playscene() override;
    void Init() override;
    void Update() override;
    void Draw() override;

private:
    //CircleShape circle;
    //RectangleShape rectangle;
    //Vector2<float> rectangleSize;
    int x;
    int y;
    int circle;
    int rectangle;
    int rX = 0;
    int rY = 300;
};

#endif