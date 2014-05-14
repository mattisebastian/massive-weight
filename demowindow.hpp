#ifndef DEMOWINDOW_H
#define DEMOWINDOW_H

#include "window.hpp"
#include <chrono>

namespace view {

    typedef std::chrono::steady_clock Clock;
    typedef std::chrono::duration<float, std::milli> milliseconds;
    
    
    
class DemoWindow : public Window
{
public:
    DemoWindow(int width, int height, const std::string& name ) 
    : Window(width, height, name) {
	tStart = Clock::now();
    }
private:
    bool display() override;
    void tp();
    double angle = 0;
    Clock::time_point tStart;
	
  //  void reshape();
//     void keyboard(unsigned int key);
};

} // end view::

#endif // DEMOWINDOW_H
