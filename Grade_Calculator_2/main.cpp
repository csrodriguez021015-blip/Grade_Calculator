//
//  main.cpp
//  Project 2
//
//  Created by Christina Rodriguez on 5/9/25.

#include <iostream>
#include <string>

std::string getName()
{
    std::string result;
    std::cout<< "What assignment group will you be calculating?: ";
    std::cin>>result;
    std::transform(result.begin(), result.end(), result.begin(), ::toupper);
    return result;
}
int requestIntFromUser(std::string input)
{
    int result = 0;
    std::cout << input;
    std::cin >> result;
    while(result < 0){
        std::cout<<"\nPlease enter a valid number: ";
    }
    
    return result;
}

float requestAFloat(std::string name, int iter, int min, float max)
{
    float input;
    
    std::cout<<"Please enter the grade for " << name << iter << " followed by the enter key: ";
    std::cin>>input;
    
    while (input < min || input > max){
        std::cout<<"Uh oh!, Invalid input. Please try again: ";
        std::cin>> input;
    }
    
  return input;
}
double calculateAverage(std::string name, int count, int totalGrade, float extraC)
{
    double result;
    float max = totalGrade *(1+ (extraC/100));
    int i;//loop iteration number
    double lowest = INT_MAX;
    double num = 0;
    double accumulator = 0;
    
      for (i =1, accumulator =0;i<count+1; i+=1)
      {
          num = requestAFloat( name,i,0, max);
          if(num < lowest){
              lowest = num;
          }
          accumulator+=num;
      }
        if (name != "MIDTERM"){
            accumulator = (accumulator - lowest)/(max - 1);
        }
    return accumulator;
    }


double requestAssignmentDetails()
{
    std::string assignmentName;
    int numberOfAssignments;
    int totalAssignmentGrade = 0;
    int lowestgradeinput= 0;
    float percentageofExtraCredit = 0;
    float totalGradeWeight = 0;
    assignmentName = getName();
    numberOfAssignments = requestIntFromUser("Please Enter the number of assignments associated with " + assignmentName + ": ");
    std::cout<<"What's the max amount of points for this assignment: ";
    std::cin>>totalAssignmentGrade;

    return calculateAverage(assignmentName, numberOfAssignments, totalAssignmentGrade, percentageofExtraCredit);
}

double calculateGrade(double quizAverage, double midtermAverage, double projectAverage)
{
  //loop till you get the whole grade;
    double result = (midtermAverage);
    result += quizAverage * 0.3;
    result += projectAverage * 0.3;
  
  return result;
}

int main()
{
    double gradeTotal = 0;
    double quizAvg = 0;
    double midtermAvg = 0;
    double projectAvg = 0;
    
    std::cout << "Hello, the purpose of this program is to calculate your grade precentage!\n";

  //calling functions to figure out what the values ought to be
    quizAvg = requestAssignmentDetails();
    midtermAvg = requestAssignmentDetails();
    projectAvg = requestAssignmentDetails();
    
    gradeTotal = calculateGrade(quizAvg, midtermAvg, projectAvg);

    printf("Your total grade precentage in the class is %.2f!\n", gradeTotal);
    
    return 0;
}
