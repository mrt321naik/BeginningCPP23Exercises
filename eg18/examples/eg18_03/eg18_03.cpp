// Eg18_03.cpp - Defining and using a move assignment operator
import array;
import std;

// Construct an Array<> of a given size, filled with some arbitary string data
Array<std::string> buildStringArray(const std::size_t size);

int main()
{
  Array<std::string> strings {123};
  strings = buildStringArray(1'000); // assign an rvalue to strings
  
  Array<std::string> more_strings{ 2'000 };
  strings = more_strings;                 // Assign an lvalue to strings
}
