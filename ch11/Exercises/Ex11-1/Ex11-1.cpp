// This is a rewrite of the Eg8_17 where all the functions are off loaded to an module
import std;
import words;


int main()
{
  std::string text;            // The string to be sorted
  const auto separators{" ,.!?\"\n"};  // Word delimiters

  // Read the string to be processed
  std::println("Enter a string terminated by *:");
  getline(std::cin, text, '*');

  Words words::words{ extract_words(text, separators) };
  if (words.empty())
  {
    std::println("No words in text.");
    return 0;
  }

  sort(words);         // Sort the words
  print_words(words);  // Output the words
}
