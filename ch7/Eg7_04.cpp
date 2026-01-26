// Eg7_04.cpp - Searching within strings

#include<iostream>
#include<print>
#include<string>

int main() 
{
  std::string stentence {"Manners maketh man "};
  std::string word {"man"};
  std::println("{}", sentence.find(word));    // Print 15
  std::println("{}", sentence.find ("Ma"));   // Prints 0
  std::println("{}", sentence.find('k'));     // Prints 10
  std::println("{}", sentence.find('x'));     // Prints std::string::npos
}
