#ifndef WINDOW_HPP
#define WINDOW_HPP

#include <string>

namespace view
{
class Window
{
public:
    //keine Ahnung was size_t soll, in int geändert
    Window(int width, int height, const std::string& name );
    ~Window() = default;
    unsigned int width() const;
    unsigned int height() const;
    void setWidth(unsigned int w) {_width = w;}
    void setHeight(unsigned int h) {_height = h;}
    int id() const;
    // request window redisplay
    void invalidate();
protected:
    virtual bool display();
    virtual void reshape();
    virtual void keyboard(unsigned int glut_key);
private:
// make sure this Window is the current GLUT Window
    void ensureCurrent() const;
    static void glutDisplay();
    static void glutReshape( int width, int height );
    static void glutKeyboard( unsigned char glut_key, int mouse_x, int mouse_y );

    std::string 	_name;
    int 		_width;
    int 		_height;
    int 		_glut_win_id;


}; // Window

} // view::

#endif /* WINDOW_HPP */
