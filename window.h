#ifndef WINDOW_H
#define WINDOW_H
#include "panel.h"
#include "component.h"
#include "vector"

class Window : public Component
{
private:
    std::vector<Panel*> _panels;
public:
    void add(Panel* panel);
    void remove(Panel* panel);
    void draw() override;
};

#endif // WINDOW_H
