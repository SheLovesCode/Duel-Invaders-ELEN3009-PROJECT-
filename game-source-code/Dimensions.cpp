//The getFunctions allow main and other classes to access the 
//the screen width and height wihtout modifying them

#include "Dimensions.h"

Dimensions::Dimensions()
{
    
}

Dimensions::~Dimensions()
{
    
}

int Dimensions::getScreenWidth() const
{
    return width;
}

int Dimensions::getScreenHeight() const
{
    return height;
}