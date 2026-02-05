// eg20_15.cpp - Sorting strings
import std;

int main()
{
  std::vector<std::string> names{"Frodo Beggins", "Gandalf the Gray", 
    "Aragon", "Samwise Gamgee", "Peregrin Took", "Meriadoc Brandybuck", 
    "Gimli", "Legolas Greenleaf", "Boromir"};

  // Sort the names lexicographically
  std::sort(begin(names), end(names),
            [](const auto& left, const auto& right) { return left.length() < right.length(); });
  std::println("Names sorted by length: {:n}", names);
}
