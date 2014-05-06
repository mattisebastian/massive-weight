#include "engine.hpp"
#include <GL/freeglut.h>
#include ../"stdafx.h"

void init(int argc, char* argv[]){

    // Todo: check ob Init ausgeführt
    glutInit(&argc, argv);
    glutSetOption(GLUT_ACTION_ON_WINDOW_CLOSE, GLUT_ACTION_GLUTMAINLOOP_RETURNS);
    
    // Erfolgreiche Initialisierung
    
    std::cout << "GlutEngine::run: checkpoint" << std::endl;
}

void run(){
    
}