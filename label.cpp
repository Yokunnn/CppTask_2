#include "label.h"
#include "component.h"
#include <iostream>
using namespace std;

Label::Label(const string& text, int x, int y, bool visible)
    : _text(text), Component(x,y,visible)
{
}

void Label::draw()
{
    if(_visible)
    {
        cout << "Label (" << _x << ", " << _y << "): " << _text << endl;
    }
}
