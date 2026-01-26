#include<iostream>
#include<vector>
#include<print>
#include<memory>

using Words = std::vector<std::shared_ptr<std::string>>;



  void swap(Words& Words, std::size_t first, std::size_t second);
  void sort(Words& words);
  void sort(Words& words, std::size_t start, std::size_t end);
  Words extract_words(const std::string& text, const std::string& separators);
  void print_words(const Words& words);
  std::size_t max_word_length(const Words& words);

int main()
{
  std::string text;       // The string to be sorted
  const auto separators{" ,.!?\"\n"}; // Word delimeters


  // Read the string to be processed
  std::println("Enter a string terminated by *:");
  getline(std::cin, text, '*');

  Words words{ extract_words(words, text, separators) };
  if (words.empty())
  {
    std::println("No words in text. ");
  
  return 0;
}
sort(words);
print_words(words);
}

// Function defenations for each prototype declared

Words extract_words(const std::string& text, const std::string& separators)
{
  Words words;

  std::size_t start {text.find_first_not_of(separators)};   // Start index of first words
  while (start != std::string::npos)
  {
    std::size_t end{ text.find_first_not_of(separators, start +1 )};  // Find end of a words
    if (end == std::string::npos)                                     // Found a separator?
      end = text.length();                                            // No, so set to end of text
    words.push_back(std::make_shared<std::string>(text.substr(start, end - start)));
    start = text.find_first_not_of(separators, end + 1); // Find start next word
  }

  return words;
}


void swap(Words& words, std::size_t first, std::size_t second)
{
  auto temp{words[first]};
  words[first] = words[second];
  words[second] = temp;
}

void sort(Words& words, std::size_t start, std::size_t end)
{
  // start index must be less than end index for 2 or more elements
  if (!(start < end))
    return;

  // Choose middle address to partition set
  swap(words, start, (start + end) / 2);            // Swap middle address with start


  // Check words against chosen word
  std::size_t current {start};
  for ( std::size_t i { start + 1}; i <= end; i++)
  {
    if (*words[i] < *words[start])                  // Is word less than chosen word?
      swap(words, ++current, i);                    // Yes, so swap to the left
  }

  swap(words, start, current);                      // Swap chosen and last swapped words

  if (current > start) sort(words, start, current - 1);      // Sort left subset if exists
  if (end > current + 1) sort(words, current + 1, end);     // Sort right subset if exists
  }



// Sort strings in ascending sequence
void sort(Words& words)
{
  if (!words.empty())
    sort(words, 0, words.size() - 1);
}

// The max_word_length() Function

std::size_t max_word_length(const Words& words)
{
    std::size_t max {};
  for (auto& pword : words)
    if (max < pword->length()) max = pword->length();
  return max;
}


// The print_words() Function
void print_words(const Words& words)
{
  const std::size_t field_width {max_word_length(words) + 1};
  const std::size_t words_per_line {8};
  std::print("{:{}}", *words[0], field_width); // Output first word
  
  std::size_t words_in_line {};                 // Number of words in current line
  for (std::size_t i {1}; i < words.size(); ++i)
  {
    // Output newline when initial letter changes or after 8 per line
    if ((*words[i])[0] != (*words[i - 1])[0] || ++words_in_line == words_per_line)
    {
      words_in_line = 0;
       std::println("");
    }
       std::print("{:{}}", *words[i], field_width); // Output a word
  }
  std::println("");
}

