#ifndef SIZE_H
#define SIZE_H


class Size
{
public:
    Size(int,int);
    int getHeight() const;
    int getWidth() const;
private:
    int height;
    void setHeight(int value);
    int width;
    void setWidth(int value);

};

#endif // SIZE_H
