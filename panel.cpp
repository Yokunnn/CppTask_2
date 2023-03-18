#include "panel.h"
#include <algorithm>
#include <iostream>
using namespace std;

Panel::Panel(int x, int y, bool visible)
    : Component(x,y,visible)
{
}

void Panel::add(Component *component)
{
    _components.push_back(component);
}

void Panel::remove(Component *component)
{
    _components.erase(std::remove(_components.begin(), _components.end(), component), _components.end());
}

void Panel::draw()
{
    if(_visible){
        cout << "Panel (" << _x << ", " << _y << ")" << endl;
        for(auto c : _components){
            cout << "~~~";
            c->draw();
        }
    }
}
