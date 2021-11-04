#ifndef Painter_hpp
#define Painter_hpp

class Painter{
public:
    void printMatrix();
    void operator()(int _x, int _y, int _brushSize);
    
private:
    int x, y, brushSize;
    
public:
    int maxSize = 7;
};

#endif
