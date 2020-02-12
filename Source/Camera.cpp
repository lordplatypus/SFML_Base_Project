#include <SFML/Graphics.hpp>
#include <math.h>
#include "/home/bryce/Documents/SFML/SFML_Base_Project/Headers/Camera.h"
using namespace std;
using namespace sf;

View Camera::mainCamera(FloatRect(200.f, 200.f, 300.f, 200.f));

Camera::Camera() {}

Camera::~Camera() {}

void Camera::SetTarget(float x, float y)
{
    mainCamera.setCenter(x, y);
}