// Eg7_05.cpp - Searching within substrings
#include<iostream>
#include<print>
#include<string>

int main()
{
  std::string text;     // The string to be searched
  std::string word;     // Substring to be found
  std::println("Enter the string to be searched and press Enter: ");
  std::getline(std::cin, text);

  std::println("Enter the string to be found and press Enter :");
  std::getline(std::cin, word);

  std::size_t count{};      // Count of substrings occurrences
  std::size_t index{};      // String index
  while ((index = text.find(word, index)) != std::string::npos)
  {
    ++count;
    index += word.length();     // Advance by full word (discards overlapping occurrences)
  }

  std::println("Your text contained {} occurrences of {:?}.", count, word);
}
