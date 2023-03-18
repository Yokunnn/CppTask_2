#ifndef LABEL_H
#define LABEL_H
#include "component.h"
#include <iostream>
using namespace std;


class Label : public Component
{
private:
    string _text;
public:
    Label(const string& text, int x = 0, int y = 0, bool visible = true);
    void draw() override;
};

#endif // LABEL_H
