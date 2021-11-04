#include "Painter.hpp"
#include <iostream>

void Painter::printMatrix(){
    for(int i = 0; i <= maxSize; i++){
        for(int j = 0; j <= maxSize; j++){
            if( (j >= x && j < x+brushSize) && (i >= y && i < y+brushSize) )
                std::cout << "1 ";
            else
                std::cout << "0 ";
        }
        std::cout << std::endl;
    }
}

void Painter::operator()(int _x, int _y, int _brushSize){
    x = _x;
    y = _y;
    brushSize = _brushSize;
}
