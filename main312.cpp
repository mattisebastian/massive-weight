#include "stdafx.h"
#include "GL/freeglut.h"


void display(){
    glClearColor(0.0f, 1.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glutSwapBuffers();   
    
}

void keyboard(unsigned char key, int x, int y){
    if(key == 113){
	printf("destroyed!!\n");
	glutDestroyWindow(1);
	glutLeaveMainLoop();
    }
}

/* Ich bin nicht sicher, was das tut! */
void reshape(int width, int height){
    glViewport(0,0,width,height);
}

int main(int argc, char* argv[]) {
    std::cout << "Windowstatus: " << glutGetWindow() << std::endl;
    glutInit(&argc, argv);
    glutSetOption(GLUT_ACTION_ON_WINDOW_CLOSE, GLUT_ACTION_GLUTMAINLOOP_RETURNS);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    int check = glutCreateWindow("cpp4cg3-Window");
    
    std::cout << "WindowIdentifier: " << check << std::endl;
    
    if(!check) 
	printf("Error creating Window!\n");
    
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutReshapeFunc(reshape);
    
    glutMainLoop();
    
    printf("Bin hinterm mainloop");
    
    return 1;
}
