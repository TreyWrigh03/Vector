/**
 * @file main.cpp
 * @author Daniel Wright
 * @date 2023-09-16
 * @brief main.cpp just the main stuff
 * 
 * main the other main stuff
 */


#include <iostream>
#include "Vector.h"
using namespace std;

int main() {
  
  Vector v1;
  Vector v2;
  int usernum =0;

  while(usernum != -69){
  
    cout << "Please enter in a number greater than zero: ";
    cin >> usernum; //takes in users input
    cout << "\n";

    if(usernum == -69){
      return 0;
    }
  
    for(int i = 0; i <= usernum; i++){
      v1.push_back(i);
    }

    v2 = v1; //copy constructor
  
    for(int i = 0; i < v2.size(); i++){
      cout << v2[i] << " " <<endl;
    }
    
    cout << "\nIf you chose to end your endevours in the world of vectors please type -69 if not\n"; 
  }
  
  return 0;
}

