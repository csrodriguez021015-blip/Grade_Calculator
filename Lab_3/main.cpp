//
//  main.cpp
//  Lab 3
//
//  Created by Christina Rodriguez on 3/14/25.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    //var
    double age;
    double weight;
    std::string smoke;
    
    //input
    std::cout<<"Hello, what is your age?: \n";
    std::cin>>age;
    
    //main if
    if(age < 18){
        std::cout<<"What is your weight?: \n";
        std::cin>>weight;
        
        if (weight > 100){
            std::cout<<"You are at high risk for heart disease.\n";
        }
        else
            std::cout<<"You are at low risk for heart disease! \n";
    }
    else if (age > 18 && age < 30){
        std::cout<<"You're at low risk for heart disease! \n";
    }
    else {
        std::cout<<"Do you smoke?: \n";
        std::cin>>smoke;
        //transforms to lowercase
        std::transform(smoke.begin(), smoke.end(), smoke.begin(), ::tolower);
        
        if (smoke == "yes"){
            std::cout<<"You're at high risk for heart disease.\n";
        }
        else {
            std::cout<<"You are at low risk of heart disease! \n";
        }
    }
    
    return 0;
}
