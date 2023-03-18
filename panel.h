#ifndef PANEL_H
#define PANEL_H
#include "component.h"
#include "vector"


class Panel : public Component
{
private:
    std::vector<Component*> _components;
public:
    Panel(int x = 0, int y = 0, bool visible = true);
    void add(Component* component);
    void remove(Component* component);
    void draw() override;
};

#endif // PANEL_H
