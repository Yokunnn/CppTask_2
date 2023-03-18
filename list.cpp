#include "list.h"
#include <algorithm>
#include <iostream>
using namespace std;

List::List(int x, int y, bool visible)
    : Component(x,y,visible)
{
}

void List::addItem(Label *label)
{
    _items.push_back(label);
}

void List::removeItem(Label *label)
{
    _items.erase(remove(_items.begin(), _items.end(), label), _items.end());
}

void List::draw()
{
    if(_visible)
    {
        cout << "List (" << _x << ", " << _y << ")" << endl;
        for(auto item : _items)
        {
            cout << "-";
            item->draw();
        }
    }
}
