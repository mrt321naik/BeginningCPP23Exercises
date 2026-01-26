// Ex5_06.cpp - Using a do-while loop to manage input
#include<iostream>
#include<print>

int main() 
{
  char reply {};                // Stores response to prompt for input
  unsigned int count {};        // Counts the number of input values
  double temperature {};
  double total {};
  do {
    std::print("Enter a temperature reading: ");  // Prompt for input
    std::cin >> temperature;                      // Read input value

    total += temperature;                         // Accumulate total of values
    ++count;                                      // Increment count

    std::print("Do you want to enter another (y/n): ");
    std::cin >> reply;
  } while(std::tolower(reply) == 'y');

  std::println("The average temperature is {:.3}", total/count);
}
