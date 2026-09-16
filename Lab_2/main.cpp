#include <iostream>
#include <iomanip>

int main(int argc, const char * argv[]) {
    // declare variables
    std::string StudentName;
    std::string StudentID;
    double StudentUnitAverage;
    
    // get values
    std::cout<<"Hello!, What is your full name?: ";
    std::getline(std::cin, StudentName);
    
    std::cout<<"What is your Student ID number?: ";
    std::cin >> StudentID;
    
    std::cout<<"What has been your average amount of units the last 3 semesters?: ";
    std::cin >> StudentUnitAverage;
    
    // display info
    std::cout<<"Hello "<<StudentName<<", here is the information we have on you: "<<std::endl;
    
    std::cout<<std::left<<std::setw(15)<<"Name "<<":"<<std::right<<std::setw(30)<<StudentName<<std::endl;
    
    std::cout<<std::left<<std::setw(15)<<"Student ID "<<":"<<std::right<<std::setw(30)<<StudentID<<std::endl;
    
    std::cout<<std::left<<std::setw(15)<<"Unit Average "<<":"<<std::right<<std::setw(30)<<std::setprecision(2)<<StudentUnitAverage<<std::endl;
    
    return 0;

}
