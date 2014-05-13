#ifndef DEMOWINDOW_H
#define DEMOWINDOW_H

#include "window.hpp"


class DemoWindow :  view::Window
{
public:
    
    DemoWindow();
    ~DemoWindow();
private:
    virtual bool display();
};

#endif // DEMOWINDOW_H
