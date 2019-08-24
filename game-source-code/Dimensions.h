//Class that sets the screen dimensions.
//The height and width have to remain constant and therefore are set as such

#ifndef DIMENSIONS_H
#define DIMENSIONS_H

class Dimensions
{
public:
    Dimensions();
    ~Dimensions();
    int getScreenWidth() const;
    int getScreenHeight() const;
    
private:
    const int width = 1920;
    const int height = 1080;
    
};

#endif