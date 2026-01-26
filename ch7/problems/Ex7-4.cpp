// Ex7-4 Program that determines weather the 2 input strings are an angram of one another
#include<iostream>
#include<print>
#include<string>

int main()
{
  std::string text;
  std::println("Please enter 2 words that may be an angram of one another and then terminated by * : ");
  std::getline(std::cin, text, '*');


  const std::string separators { " ,;:.\"!?'\n"};       //Word delimiters
  std::vector<std::string> words;                       // Words found
  auto start { text.find_first_not_of(separators) };    // First word start index


  while (start != std::string:npos)                     // Find the words
  {
    auto end { text.find_first_not_of(separators, start + 1) };     // Find end of word
    if (end == std::string::npos)                                   // Found a separator?
      end = text.length();                                          // No, so set to end of text

  }
}
