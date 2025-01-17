#ifndef SCENE_H_
#define SCENE_H_
#include <SFML/Graphics.hpp>
#include "LP.h"
using namespace sf;
using namespace std;

class Scene
{
public:
    virtual ~Scene() = default;
    virtual void Init() = 0;
    virtual void Update() = 0;
    virtual void Draw() = 0;
};

#endif