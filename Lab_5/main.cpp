//
//  main.cpp
//  Lab 5
//
//  Created by Christy Rodriguez on 4/12/25.
//

#include <iostream>
#include <chrono>
#include <thread>

//Declare functions
void myPrint(int input);
void myPrint(std::string input); //include delay
void myPrint(double input);
void myPrint(char input);

//Main function
int main(int argc, const char * argv[]) {
    //myPrint string
    std::string name;
    std::cout<<"What is your name?: \n";
    std::cin>>name;
    std::string sentence = "Hello, "+name+"! Nice to meet you :)\n";
    myPrint(sentence);
    
    //myPrint int
    int age;
    std::string bday;
    std::cout<<"How old are you?: \n";
    std::cin>>age;
    std::cout<<"Has your birthday passed?: \n";
    std::cin>>bday;
    //transform string to lowercase
    std::transform(bday.begin(), bday.end(), bday.begin(), ::tolower);
    
    if (bday == "no"){
        age += 1;
    }
    else
        age = age;
    
    myPrint(age);
    
    //myPrint double
    double height;
    std::cout<<"What is your height in ft? (use decimal for inches): \n";
    std::cin>>height;
    myPrint(height);
    
    //myPrint char
    char ch;
    std::cout<<"Enter any character: \n";
    std::cin>>ch;
    myPrint(ch);
    
    return 0;
}

//Functions
void myPrint(int input){
    int birthyear = 2025 - input;
    std::cout<<"Your birth year is "<<birthyear<<". \n";
}

void myPrint(std::string input){
    //seed the random number generator
    srand(static_cast<unsigned int>(time(0)));
    
    //std::string inputString = "Hello, this is an example of an input string. Watch... ok done..";
    
    for(char c: input){
        std::cout<<c<<std::flush;
        double random_delay = (static_cast<double>(rand())/RAND_MAX)*0.1;
        std::this_thread::sleep_for(std::chrono::duration<double>(random_delay));
    }
}

void myPrint(double input){
    input = std::round(input*30.48);
    std::cout<<"Your height in cm is "<<input<<"\n";
}

void myPrint(char input){
    std::cout<<"The ASCII value of "<<input<<" is "<<int(input)<<"\n";
}
