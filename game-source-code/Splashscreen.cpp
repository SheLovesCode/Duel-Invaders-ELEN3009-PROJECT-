#include "Splashscreen.h"

Splashscreen::Splashscreen(sf::RenderWindow& initialWindow)
{   
    //Initialising splashscreen by loading and drawing the background image to the window
    splashScreenBackground.loadFromFile("Resources/background.jpg");
    background.setTexture(splashScreenBackground);
    initialWindow.draw(background);
    
    //Loading fonts to be used by different texts
    gameTitleFont.loadFromFile("Resources/Exninja-Bold.otf");
    createSplashScreen(gameTitle, gameTitleFont, 100, 1.0, initialWindow);
    
    instructionsFont.loadFromFile("Resources/Gasalt-Regular.ttf");
    createSplashScreen(controls, instructionsFont, 75, 7.5, initialWindow);
    
}

//This function creates the splashscreen using the specific font, text and font size provided
//It also draws the splashscreen using the same window created in the main.cpp

void Splashscreen::createSplashScreen(string text, sf::Font textFont,int fontSize, float factor, sf::RenderWindow& splashScreenWindow)
{   
    //Writing the game Title 
    sf::Text textName(text, textFont);
    textName.setCharacterSize(fontSize);
    textName.setFillColor(sf::Color::Magenta);
    textName.setStyle(sf::Text::Bold);
    centerText = gameName.getLocalBounds();
    textName.setOrigin(centerText.left + centerText.width/2, centerText.top + centerText.height/2);
    textName.setPosition(splashScreenWindow.getSize().x/3, splashScreenWindow.getSize().y/(17/factor));
    
    splashScreenWindow.draw(textName);
}

Splashscreen::~Splashscreen()
{
    
}
