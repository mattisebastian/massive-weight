#include "demowindow.hpp"
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/freeglut_std.h>
#include <string>


using namespace view;


// void DemoWindow::reshape() 
// {
//     
//     
// }



bool DemoWindow::display()
{
    glClearColor(0.1f, 0.2f, 0.3f, 1.0f);
    glClear(GL_DEPTH_BUFFER_BIT | GL_COLOR_BUFFER_BIT);
    
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    
    int w = glutGet(GLUT_WINDOW_WIDTH);
    int h = glutGet(GLUT_WINDOW_HEIGHT);
    gluPerspective(30, w / h, 2, 20);
    
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    
    
    gluLookAt(0, -7, 0, 0, 0, 0, 0, 0, 1);
    
    view::Clock::time_point t2 = view::Clock::now();
    
    milliseconds duration= std::chrono::duration_cast<milliseconds>(t2 - tStart);
    
    
    angle = duration.count() * 0.072f;
    
    if(angle > 360){
	angle = 0;
	
    }
    
    //tStart = t2;
    
    // Rotation
    glRotatef(angle, 0, 0, 1);
    
    glBegin(GL_LINES);
    glColor3f(0.75f, 0.75f, 0.75f);
    
    // Unterkanten
    
    glVertex3i(1, -1, -1);
    glVertex3i(-1, -1, -1);
    
   
    glVertex3i(-1, -1, -1);
    glVertex3i(-1, 1, -1);
    
    glVertex3i(-1, 1, -1);
    glVertex3i(1, 1, -1);
    
    glVertex3i(1, 1, -1);
    glVertex3i(1, -1, -1);
    
    
    // Oberkanten
    
    glVertex3i(1, -1, 1);
    glVertex3i(-1, -1, 1);
    
    glVertex3i(-1, -1, 1);
    glVertex3i(-1, 1, 1);
    
    glVertex3i(-1, 1, 1);
    glVertex3i(1, 1, 1);
    
    glVertex3i(1, 1, 1);
    glVertex3i(1, -1, 1);
    
    // Seitenkanten
    
    glVertex3i(1, -1, -1);
    glVertex3i(1, -1, 1);
    
    glVertex3i(-1, -1, -1);
    glVertex3i(-1, -1, 1);
    
    glVertex3i(-1, 1, -1);
    glVertex3i(-1, 1, 1);
    
    glVertex3i(1, 1, -1);
    glVertex3i(1, 1, 1);
    
    
    glEnd();
    
    std::string a = "angle";
    
    a += " " + std::to_string(angle) + "time: " + std::to_string(duration.count());
    
    glutSetWindowTitle(a.c_str());
    
    
    return true; 
    //duration.count() < 5.0f;
}

