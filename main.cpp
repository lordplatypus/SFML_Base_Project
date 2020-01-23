#include <iostream>
#include <SFML/Graphics.hpp>
#include <vector>
#include "LP.h"
#include "Game.h"
using namespace sf;
using namespace std;



int main()
{
    RenderWindow window(VideoMode(1080, 720), "game window");
    LP lp;
    Game game(&lp);

    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
            {
                window.close();
            }

            game.Update(&event);
            game.Draw();

            window.clear();
            lp.Draw(&window);
            //renderCircle.DrawCircleInWindow(&window);
            window.display();
        }
    }
    return EXIT_SUCCESS;
}