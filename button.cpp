#include "button.h"
#include "component.h"
#include <iostream>
using namespace std;

Button::Button(const string& text, void(*onClick)(), int x, int y, bool visible)
    : Component(x,y,visible), _text(text), _onClick(onClick)
{
}

void Button::click()
{
    _onClick();
}

void Button::draw()
{
    if(_visible)
    {
        cout << "Button (" << _x << ", " << _y << "): " << _text << endl;
    }
}
