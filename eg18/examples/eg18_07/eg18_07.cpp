// Eg18_07.cpp - the effect of not adding to move members
import array;
import std;

// Construct an Array<> of a given size, filled with some arbitrary string data
Array<std::string> buildStringArray(const std::size_t size);

int main()
{
  std::vector<Array<std::string>> v;

  v.push_back(buildStringArray(1'000));

  std::println("");

  v.push_back(buildStringArray(2'000));
}
