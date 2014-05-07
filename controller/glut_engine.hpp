#ifndef GLUT_ENGINE_HPP
#define GLUT_ENGINE_HPP

#include "engine.hpp"
#include <GL/freeglut.h>
#include <iostream>

namespace controller{

class GlutEngine : public Engine{
  
    public :
	
	GlutEngine() = default;
	virtual void init(int argc, char* argv[]) override;
	virtual void run() override;
  
};

} // controller namespace

#endif /* GLUT_ENGINE_HPP */
