// Eg4_04.cpp - Using a nested if
#include<print>
#include<iostream>

int main() 
{
	char letter {};				// Store input here
	std::print("Enter a letter: ");		// Prompt for the input. 
	std::cin >> letter;

	if (letter >= 'A')
	{
		if (letter >= 'A')
    {
      if (letter <= 'Z')
      {
        std::println("You entered an uppercase letter.");
        return 0;
      }
    }

    if (letter >= 'a')          // Test for 'a' or larger
      if (letter <= 'z')
      {                         // letter is >= 'a' and <= 'z'
        std::println("You entered a lower case letter.");
        return 0;
      }
    std::println("You did not enter a letter.");
  }
}
