#ifndef INPUT_H_
#define INPUT_H_
#include <SFML/Graphics.hpp>

class Input
{
public:
    Input();
    ~Input();
    static sf::Keyboard::Key ReturnKeyPressed();
    static void Update(sf::Event* event);
    static bool GetButton(sf::Keyboard::Key buttonID);
    static bool GetButtonDown(sf::Keyboard::Key buttonID);
    static bool GetButtonUp(sf::Keyboard::Key buttonID);
private:
    static sf::Keyboard::Key prevState;
    static sf::Keyboard::Key currentState;
};

#endif