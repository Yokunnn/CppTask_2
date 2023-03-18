#include "component.h"

Component::~Component(){}

Component::Component(int x, int y, bool visible)
    : _x(x), _y(y), _visible(visible)
{
}

void Component::move(int dx, int dy)
{
    _x += dx;
    _y += dy;
}

void Component::setVisible(bool visible)
{
    _visible = visible;
}

void Component::draw(){}
