// eg18_05b.cpp - Use of a pass-by-value parameter to pass by either lvalue or rvalue
import array;
import std;

// Construct an Array<> of a given size, filled with some arbitrary string data
Array<std::string> buildStringArray(const std::size_t size);

int main()
{
  Array<Array<std::string>> array_of_arrays;

  Array<std::string> array{ buildStringArray(1'000) }; 
  array_of_arrays.push_back(array);                 // Push an lvalue

  array.push_back("One more for good measure");
  std::println("");

  array_of_arrays.push_back(std::move(array));    // Push an rvalue
}
