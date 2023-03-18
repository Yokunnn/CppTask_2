#include "line.h"
#include <iostream>
using namespace std;

Line::Line(int length, int x, int y, bool visible)
    : _length(length), Component(x,y,visible)
{
}

void Line::draw()
{
    if(_visible)
    {
        cout << "Line (" << _x << ", " << _y << "), length: " << _length << endl;
    }
}
