#ifndef GAME_H_
#define GAME_H_
#include <SFML/Graphics.hpp>
#include "LP.h"
#include "Scene.h"
using namespace sf;
using namespace std;

class Game
{
public:
    Game();
    ~Game();
    void Init();
    void Update(Event* event);
    void Draw();
    void ChangeScene();
    static void ChangeScene(Scene* newScene);

private:
    static Scene* scene;
    // CircleShape circle;
    // RectangleShape rectangle;
    // Vector2<float> rectangleSize;
    // int x;
    // int y;
};

#endif