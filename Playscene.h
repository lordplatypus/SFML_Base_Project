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
    Playscene(LP* lp);
    ~Playscene() override;
    void Init() override;
    void Update() override;
    void Draw() override;

private:
    LP* lp;
    CircleShape circle;
    RectangleShape rectangle;
    Vector2<float> rectangleSize;
    int x;
    int y;
};

#endif