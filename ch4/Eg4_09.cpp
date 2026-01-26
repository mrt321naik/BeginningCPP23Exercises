// Eg4_09.cpp - Multiple case actions
#include<iostream>
#include<print>

int main() 
{
  char letter {};
  std::print("Enter a letter");
  std::cin >> letter;

  if (std::isalpha(letter))
  {
    switch (std::tolower(letter))
    {
      case 'a': case 'e': case 'i': case 'o': case 'u':
        std::println("You have entered a voewl.");
        break;
      default:
      std::println("You entered a consonant");
      break;
    }
  }
  else {
    std::println("You did not enter a letter. ");
  }

}
