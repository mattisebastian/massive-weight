#include "demowindow.hpp"
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/freeglut_std.h>

using namespace view;


void DemoWindow::reshape() 
{
    
    
}



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
    
    
    // Rotation
    glRotatef(30, 0, 0, 1);
    
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
    
    
    
    return true;
}

