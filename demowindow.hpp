#ifndef DEMOWINDOW_H
#define DEMOWINDOW_H

#include "window.hpp"

namespace view {

class DemoWindow : public Window
{
public:
    DemoWindow(int width, int height, const std::string& name ) : Window(width, height, name) {}
private:
    bool display() override;
    void reshape();
//     void keyboard(unsigned int key);
};

} // end view::

#endif // DEMOWINDOW_H
