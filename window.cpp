#include "window.hpp"
#include "stdafx.h"
#include <GL/freeglut_std.h>
#include <GL/freeglut_ext.h>

using namespace view;

Window::Window( int width, int height, const std::string& name )
{
    _glut_win_id = glutCreateWindow(name.c_str());
    glutSetWindow(_glut_win_id);
    glutSetWindowData(this);

    glutReshapeWindow(width, height);
    _name = name;
    _width = width;
    _height = height;


    glutDisplayFunc(glutDisplay);
    glutKeyboardFunc(glutKeyboard);
    glutReshapeFunc(glutReshape);
    glutMainLoop();

    //glutSetWindowData(&_glut_win_id);

}

int Window::id() const
{
    return this->_glut_win_id;
}


unsigned int Window::width() const
{
    return this->_width;

}

unsigned int Window::height() const
{
    return this->_height;

}

// request window redisplay
void Window::invalidate()
{}

bool Window::display()
{
    glClearColor(0.0f, 0.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    printf("Window id: %d, witdh: %d, heigth: %d\n",
           this->id(),
           this->width(),
           this->height()
          );
    
    return true;
}
void Window::reshape()
{
    //Ich bin nicht sicher, was das tut!
    //glViewport(0,0,width,height);
}

void Window::keyboard(unsigned int key)
{
    if(key == 113) {
        std::printf("destroyed!!\n");
        glutDestroyWindow(_glut_win_id);
        glutLeaveMainLoop();


    }

}

// make sure this Window is the current GLUT Window
void Window::ensureCurrent() const
{
    glutSetWindow(this->_glut_win_id);

}

void Window::glutDisplay()
{
    Window * ptr = static_cast<Window*>(::glutGetWindowData());
    if( ptr != nullptr){
        if (ptr->id() != 0) {
            ptr->ensureCurrent();
	    glutSwapBuffers();
            ptr->display();


        }else std::cerr << "id ist 0!" << std::endl;
    }else std::cerr<< "nullptr in glutDisplay!" << std::endl;
	

}

void Window::glutReshape( int width, int height )
{
   Window * ptr = static_cast<Window*>(::glutGetWindowData());
    if( ptr != nullptr){
        if (ptr->id() != 0) {
            ptr->ensureCurrent();
	    ptr->setHeight(height);
	    ptr->setWidth(width);
	    ptr->reshape();


        }else std::cerr << "id ist 0!" << std::endl;
    }else std::cerr << "nullptr in glutReshape!" << std::endl;
	

}

void Window::glutKeyboard( unsigned char glut_key, int mouse_x, int mouse_y )
{
    Window * ptr = static_cast<Window*>(::glutGetWindowData());
    if( ptr != nullptr){
        if (ptr->id() != 0) {
            ptr->ensureCurrent();
            ptr->keyboard(glut_key);


        }else std::cerr << "id ist 0!" << std::endl;
    }else std::cerr << "nullptr in glutKey!" << std::endl;
	
}


