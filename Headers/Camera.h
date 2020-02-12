#ifndef CAMERA_H_
#define CAMERA_H_
#include <SFML/Graphics.hpp>

class Camera
{
public:
    Camera();
    ~Camera();
    static void SetTarget(float x, float y);
    static sf::View mainCamera;
};

#endif