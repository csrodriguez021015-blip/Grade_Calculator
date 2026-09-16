//
//  main.cpp
//  Lab 6
//
//  Created by Christina Rodriguez on 4/28/25.
//

#include <iostream>
#include <array>

template <typename T, size_t N>
int findSmallest(std::array<int, N>& input)
{
    int smallest;
    int secSmallest = INT_MAX;
    for(smallest = input.at(0); auto i : input)
    {
        if(smallest > i) smallest =i;
    }
    
    for(int j = 0; j < N; j++){
        if(input[j] != smallest && input[j] < secSmallest){
            secSmallest = input[j];
        }
    }
    
    return secSmallest;
}

template <typename T, size_t N>
int findSecSmallest(std::array<int, N>& input)
{
    int smallest;
    int secSmallest;
    
    if(input[0]>input[1]){
        smallest = input[1];
        secSmallest = input[0];
    }
    else{
        smallest = input[0];
        secSmallest = input[1];
    }
    for(smallest = input.at(0); auto i : input)
    {
        if(smallest > i){
            secSmallest = smallest;
            smallest = i;
        }
        
    }
    
    return secSmallest;
}

int main()
{
  std::array<int,5> myArray{5,4,90,1,10};
  std::cout << findSmallest<int,5>(myArray)<<std::endl;
}
