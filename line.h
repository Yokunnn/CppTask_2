#ifndef LINE_H
#define LINE_H
#include "component.h"


class Line : public Component
{
private:
    int _length;
public:
    Line(int length, int x = 0, int y = 0, bool visible = true);
    void draw() override;
};

#endif // LINE_H
