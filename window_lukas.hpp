#ifndef WINDOW_HPP
#define WINDOW_HPP

namespace view
{
class Window
{
public:
    Window( size_t width, size_t height, const std::string& name );
    ~Window();
    unsigned int width() const;
    unsigned int height() const;
    // request window redisplay
    void invalidate();
protected:
    virtual bool display();
    virtual void reshape();
    virtual void keyboard();
private:
// make sure this Window is the current GLUT Window
    void ensureCurrent() const;
    static void glutDisplay();
    static void glutReshape( int width, int height );
    static void glutKeyboard( unsigned char glut_key, int mouse_x, int mouse_y );

    std::string 	_name;
    size_t 		_width;
    size_t 		_height;
    int 		_glut_win_id;


}; // Window

} // view::

#endif /* WINDOW_HPP */