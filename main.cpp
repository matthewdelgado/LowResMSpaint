#include <iostream>
#include "Painter.hpp"
//#include <exception>

int main(){
    int x, y;
    bool validStart = false;
    
    int brushSize;
    int minBrush = 1;
    int maxBrush = 3;
    bool validBrush = false;
    
    Painter p1;
    
    do{
        try{
            std::cout << "Enter x (0-7): ";
            std::cin >> x;
            std::cout << "Enter y (0-7): ";
            std::cin >> y;
            if( x<0 || x>p1.maxSize || y<0 || y>p1.maxSize )
                throw("OUT_OF_RANGE exception thrown: x or y out of range.");
            validStart = true;
        }catch(const char* eMsg){
            std::cout << eMsg << std::endl << std::endl;
        }
    }while(validStart == false);
    
    do{
        try{
            std::cout << "Enter brush size (1-3): ";
            std::cin >> brushSize;
            if(brushSize<minBrush || brushSize>maxBrush)
                throw("OUT_OF_RANGE exception thrown: Brush size is out of range.");
            if(x+brushSize-1>p1.maxSize || y+brushSize-1>p1.maxSize)
                throw("OUT_OF_RANGE exception thrown: Brush size is out of range of the board.");
            validBrush = true;
        }catch(const char* eMsg){
            std::cout << eMsg << std::endl << std::endl;
        }
    }while(validBrush == false);
    
    p1(x,y,brushSize);
    
    p1.printMatrix();
}
