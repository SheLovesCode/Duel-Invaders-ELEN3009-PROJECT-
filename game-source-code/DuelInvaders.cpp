//The main.cpp for the game

#include "Dimensions.h"
#include "Splashscreen.h"
#include "SFML/Graphics.hpp"

#include <iostream>

using namespace std;

int main ()
{
    auto screenDimensions = Dimensions();
    int width = screenDimensions.getScreenWidth();
    int height = screenDimensions.getScreenHeight();
    sf::RenderWindow window(sf::VideoMode(width, height), "Duel Invaders", sf::Style::Close | sf::Style::Titlebar);
    
    sf::Event state;
    
        while(window.isOpen())
        {
            while (window.pollEvent(state))
            {
                if (state.type == state.Closed)
                {
                    window.close();
                }
            }
        
        auto screen = Splashscreen(window);
        window.display();
        }
    
    return 0;
}