//The Splashscreen class creates and draws the splashscreen
//The assets used to create this class are intialised as private so that the client can't change them
#ifndef SPLASHSCREEN_H
#define SPLASHSCREEN_H

#include <string>
#include "SFML\Graphics.hpp"

using namespace std;

class Splashscreen
{
public:
    Splashscreen(sf::RenderWindow& initialWindow);
    void createSplashScreen(string, sf::Font, int, float, sf::RenderWindow&);
    ~Splashscreen();
    
private:
    sf::Sprite background;
    sf::Font gameTitleFont;
    sf::Font instructionsFont;
    sf::FloatRect centerText;
    sf::Text gameName;
    sf::Text instructions;
    sf::Texture splashScreenBackground;
    
    string gameTitle = "DUEL INVADERS";
    string controls = " Press SPACE to shoot"
                         "\n Press <-- --> to move \n"
                         "\n Press any key to play"
                         "\n Press ESC to exit";
};

#endif