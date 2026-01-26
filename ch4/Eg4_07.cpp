// Eg4_07.cpp - Using the conditional operator to select output. 
#include<iostream>
#include<print>

int main()
{
  int mice {};    // Count of all mice
  int brown {};   // Count of all brown mice. 
  int white {};   // Count of all white mice. 


  std::print("How many brown miche do you have? ");
  std::cin >> brown;
  std::print("How many white mice do you have? ");
  std::cin >> white;

  mice = brown + white;

  std::println("You have {} {} in total. ", mice, mice == 1 ? "mouse" : "mice");
}
