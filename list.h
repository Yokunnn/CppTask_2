#ifndef LIST_H
#define LIST_H
#include "component.h"
#include "vector"
#include "label.h"

class List : public Component
{
private:
    std::vector<Label*> _items;
public:
    List(int x = 0, int y = 0, bool visible = true);
    void addItem(Label* label);
    void removeItem(Label* label);
    void draw() override;
};

#endif // LIST_H
