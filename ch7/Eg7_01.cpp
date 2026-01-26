// Ex7_01.cpp - Concatenating strings
#include<iostream>
#include<print>
#include<string>

int main()
{
  std::string first;      // Stores the first namespace  
  std::string second;     // Stores the second name

  std::print("Enter your first name: ");
  std::cin >> first;

  std::print("Enter your second name: ");
  std::cin >> second;     // Read second name

  std::string sentence {"Your full name is "};    // Create a basic sentence
  sentence = first + " " + second + ".";          // Augment with names

  std::println("{}", sentence);
  std::println("The string contains {} characters.", sentence.length());

}
