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
    int x;
    int y;
    int circle;
    int rectangle;
    int sprite;
    int spriteArray[48];
    int* spritePtr;
    int spriteAnimationCount = -1;
    int delayCount = 0;
    int rX = 0;
    int rY = 300;
};

#endif