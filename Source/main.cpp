#include <iostream>
#include <SFML/Graphics.hpp>
#include <vector>
#include "/home/bryce/Documents/SFML/SFML_First_Project/Headers/LP.h"
#include "/home/bryce/Documents/SFML/SFML_First_Project/Headers/Game.h"
using namespace sf;
using namespace std;



int main()
{
    bool isRunning = true;
    RenderWindow window(VideoMode(1080, 720), "game window");
    Game game;
    game.Init();

    while (isRunning)
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
            {
                isRunning = false;
            }
            if (event.key.code == Keyboard::Escape)
            {
                isRunning = false;
            }  
            game.Update();
        }
        game.Draw();
        window.clear();
        LP::Draw(&window);
        window.display();
    }
    return EXIT_SUCCESS;
}