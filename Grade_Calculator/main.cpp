#include <iostream>
#include <random>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
#include <ctime>
#include <iostream>
#include <stdio.h>


float requestAFloat(std::string name, int iter, int min, float max)
{
    float input;
  // Ask the user the message
    std::cout <<"Please Enter the grade for " <<name<< iter<< " followed by the enter key: ";
    std::cin >>input;
    
    while (input<min || input>max){
        std::cout <<"Uh Oh!, Invalid Input.\nPlease try again. : ";
        std::cin >>input;
        }
  //return the float to whoever called you
    return input;
}

double calculateAverage(std::string name, int count, int totalGrade, float extraC)
{
    double result;
    double accumulator;
    float max;
    int i;//loop iteration number
    result = 0;
    max = totalGrade *(1+ (extraC/100));
  
    for (i=1, accumulator=0;i<count+1; i+=1)
    {
        accumulator += requestAFloat(name,i,0, max);
    }
    
    return accumulator;
}

double calculateGrade(double midtermsAverage, double quizesAverage, double projectsAverage )
{
  //calulate the actual precentage
  //midterms are out of 40 and count for 40% of your grade
    double result = (midtermsAverage);
  //Quizes are out of 10 and count for 30% of your grade
    result+= quizesAverage*.3;
  //Projects are out of 10 and count for 30% of your grade
    result += projectsAverage*.3;
  
    return result;
}

int main(void) {
    double gradeTotal;
    double midtermAverage;
    double quizesAverage;
    double projectsAverage;
  // your program starts here
    std::cout<<"Hello, the purpose of this program is to calculate your grade precentage!\n";
  
  //calling functions to figure out what the values ought to be
    midtermAverage = calculateAverage("Midterm",2,40,10);
    quizesAverage = calculateAverage("Quiz", 6, 10, 0);
    projectsAverage = calculateAverage("Project", 6, 10, 0);
  
    gradeTotal = calculateGrade (midtermAverage, quizesAverage, projectsAverage);

    printf("Your total grade precentage in the class is %.2f!\n", gradeTotal);
  
    return 0;
}
