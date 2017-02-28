#include "size.h"

Size::Size(int width,int height)
{    
    setHeight(height);
    setWidth(width);
}

int Size::getHeight() const
{
    return height;
}

void Size::setHeight(int value)
{
    height = value;
}

int Size::getWidth() const
{
    return width;
}

void Size::setWidth(int value)
{
    width = value;
}
