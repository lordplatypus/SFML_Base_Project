#include <SFML/Graphics.hpp>
#include "/home/bryce/Documents/SFML/SFML_First_Project/Headers/Input.h"
using namespace std;
using namespace sf;

Keyboard::Key Input::prevState;
Keyboard::Key Input::currentState;

Input::Input()
{}

Input::~Input()
{}

Keyboard::Key Input::ReturnKeyPressed()
{
    return currentState;
}

void Input::Update(Event* event)
{
    prevState = currentState;
    currentState = event->key.code;
    if (event->type == Event::KeyReleased) currentState = Keyboard::Unknown;
}

bool Input::GetButton(Keyboard::Key buttonID)
{

}

bool Input::GetButtonDown(Keyboard::Key buttonID)
{
    if (currentState == buttonID && prevState != buttonID) return true;
    else return false;
}

bool Input::GetButtonUp(Keyboard::Key buttonID)
{

}