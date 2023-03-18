#ifndef BUTTON_H
#define BUTTON_H
#include "component.h"
#include <iostream>
using namespace std;

class Button : public Component
{
private:
    string _text;
    void(*_onClick)();
public:
    Button(const string& text, void(*onClick)(), int x = 0, int y = 0, bool visible = true);
    void click();
    void draw() override;
};

#endif // BUTTON_H
