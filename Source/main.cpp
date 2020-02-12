#include <iostream>
#include <SFML/Graphics.hpp>
#include <vector>
#include "/home/bryce/Documents/SFML/SFML_Base_Project/Headers/LP.h"
#include "/home/bryce/Documents/SFML/SFML_Base_Project/Headers/Game.h"
#include "/home/bryce/Documents/SFML/SFML_Base_Project/Headers/Camera.h"
using namespace sf;
using namespace std;



int main()
{
    bool isRunning = true;//bool for main game loop
    RenderWindow window(VideoMode(1080, 720), "game window"); //game window
    window.setFramerateLimit(60);
    Game game; //Create game class, handles scenes
    game.Init(); //first time setup for the game class

    while (isRunning)
    {//main game loop
        Event event; //events
        while (window.pollEvent(event))
        {//
            if (event.type == Event::Closed)
            {
                isRunning = false;
            }
            else if (event.key.code == Keyboard::Escape)
            {
                isRunning = false;
            }
        }
        game.Update();
        window.setView(Camera::mainCamera);
        game.Draw(); //objects are added to the draw maps
        window.clear();
        LP::Draw(&window); //actually draw objects
        window.display();
    }
    return EXIT_SUCCESS;
}