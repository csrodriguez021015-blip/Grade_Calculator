//
//  main.cpp
//  Lab4
//
//  Created by Christina Rodriguez on 4/13/25.
//

#include <iostream>

void rectangle (int width, int height);

int main(int argc, const char * argv[]) {
    
    std::cout<<"Vro ts taking frvr 2 load icl ts pmo fr ong.\n";
    rectangle(4, 3);
    
    std::cout<<"Drawing a rectangle of width 5 and height 4...\n";
    rectangle(5, 4);
    
    std::cout<<"Drawing a rectangle of width 7 and height 2...\n";
    rectangle(7, 2);
    
    return 0;
}

void rectangle (int width, int height){
    if ((width && height) > 0){
        
        for (int i = 0; i < width; ++i){
            std::cout<<" * ";
        }
        std::cout<<std::endl;
        
        for(int i = 0; i < height - 2; ++i){
            std::cout<<" * ";
            for(int j = 0; j < width - 2; ++j){
                std::cout<<"   ";
            }
            if (width > 1){
                std::cout<<" * ";
            }
            std::cout<<std::endl;
        }
        
            for(int i = 0; i < width; ++i){
                std::cout<<" * ";
        }
        std::cout<<std::endl;
    }
}
