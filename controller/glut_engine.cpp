#include "../stdafx.h"
#include "GL/freeglut.h"
#include <stdexcept>
#include <memory>
#include "glut_engine.hpp"
#include "../window.hpp"

namespace controller {
/*
controller::GlutEngine::GlutEngine()
{}*/

void display() {
    glClearColor(0.0f, 0.0f, 1.0f, 0.7f);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glutSwapBuffers();

}

void keyboard(unsigned char key, int x, int y) {
    if(key == 113) {
        printf("destroyed!!\n");
        glutDestroyWindow(1);
        glutLeaveMainLoop();

    }
}

void reshape(int width, int height) {

    /* Ich bin nicht sicher, was das tut! */
    glViewport(0,0,width,height);
}


void GlutEngine::init(int argc, char* argv[]) {
    // Todo: check ob Init ausgeführt
    glutInit(&argc, argv);
    glutSetOption(GLUT_ACTION_ON_WINDOW_CLOSE, GLUT_ACTION_GLUTMAINLOOP_RETURNS);
    //glutInitWindowPosition(100, 100);
//     glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
//  int check = glutCreateWindow("cpp4cg3-Window");
/*
    std::cout << "WindowIdentifier: " << check << std::endl;

    if(!check)
        printf("Error creating Window!\n");*/

//     glutDisplayFunc(display);
//     glutKeyboardFunc(keyboard);
//     glutReshapeFunc(reshape);
    // Erfolgreiche Initialisierung

    std::cout << "GlutEngine::init: checkpoint" << std::endl;
}

void controller::GlutEngine::run()
{
    std::shared_ptr< view::Window > window( new view::Window( 500,500, "cpp4cg3-window" ));
    //std::shared_ptr< view::Window > window2( new view::Window( 400,400, "cpp4cg3-window-2" ));

    
   
}






} // controller namespace
