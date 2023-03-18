#ifndef COMPONENT_H
#define COMPONENT_H


class Component
{
protected:
    int _x, _y;
    bool _visible;
public:
    Component(int x = 0, int y = 0, bool visible = true);
    virtual ~Component();
    virtual void draw();
    void move(int dx, int dy);
    void setVisible(bool visible);
};

#endif // COMPONENT_H
