#include <iostream>
#include "window.h"
#include "panel.h"
#include "label.h"
#include "list.h"
#include "line.h"
#include "button.h"
#include "component.h"

using namespace std;

int main()
{
    //creating hierarchy tree
    Window* window1 = new Window;
    Panel* panel1 = new Panel;
    Panel* panel2 = new Panel(10, 10);
    Panel* panel3 = new Panel(200, 200);

    Line* line1 = new Line(230);
    panel1->add(line1);

    Label* label = new Label("I wanna be the boshy", 10, 10);
    Button* btn1 = new Button("0__o", [](){cout << "T__T" << endl;}, 35, 30);
    panel2->add(label);
    panel2->add(btn1);

    Label* label1 = new Label("first", 200, 210);
    Label* label2 = new Label("second", 200, 220);
    Label* label3 = new Label("third", 200, 230);
    List* list = new List(200, 200);
    list->addItem(label1);
    list->addItem(label2);
    list->addItem(label3);
    Button* btn2 = new Button("click click click", [](){cout << "finally clicked" << endl;}, 200, 250);
    panel3->add(list);
    panel3->add(btn2);

    window1->add(panel1);
    window1->add(panel2);
    window1->add(panel3);

    window1->draw();
    cout << "MAGIC CHANGES..." << endl;

    panel2->setVisible(false);
    line1->move(21, 2223);
    list->removeItem(label3);

    window1->draw();

    cout << "TESTING BUTTON CLICK..." << endl;
    btn2->click();

    //cleaning
    delete window1;
    delete panel1;
    delete panel2;
    delete panel3;
    delete line1;
    delete label;
    delete label1;
    delete label2;
    delete label3;
    delete list;
    delete btn1;
    delete btn2;

    return 0;
}
