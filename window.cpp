#include "window.h"
#include "component.h"
#include <algorithm>
#include <iostream>
using namespace std;

void Window::add(Panel* panel)
{
    _panels.push_back(panel);
}

void Window::remove(Panel* panel)
{
    _panels.erase(std::remove(_panels.begin(), _panels.end(), panel), _panels.end());
}

void Window::draw()
{
    if(_visible)
    {
        cout << "Window (" << _x << ", " << _y << ")" << endl;
        for(auto p : _panels){
            cout << "---";
            p->draw();
        }
    }
}
