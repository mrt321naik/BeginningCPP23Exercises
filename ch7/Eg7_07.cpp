// Eg7_07.cpp - Replacing words in a string
#include<iostream>
#include<print>
#include<string>

int main()
{
  std::string text;                                       // The string to be modified
  std::println("Enter a string terminated by *: ");   
  std::getline(std::cin, text, '*');

  std::string word;                                       // The word to be replaced
  std::print("Enter thw word to be replaced: ");
  std::cin >> word;

  std::string replacement;                                // The word to be subustituted
  std::print("Enter the string to be subustituted for {}: ", word);
  std::cin >> replacement;

  if (word == replacement)
  {
    std::println("The word and its replacement are the same. \nOperation aborted. ");
    return 1;
  }

  std::size_t start {text.find(word)};        // Index of 1st occurence of word
  while (start != std::string::npos)          // Find and replace all occurences
  {
    text.replace(start, word.length(), replacement);    // Replace word
    start = text.find(word, start + replacement.length());
  }

  std::println("\n The string you enterd is now:\n{}", text);
}
