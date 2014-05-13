
namespace controller{

class Engine
{
public:
    //virtual ~Engine() {};
    virtual void init(int argc, char ** argv) = 0;
    virtual void run() = 0;
  
  
};
    
} // controller namespace