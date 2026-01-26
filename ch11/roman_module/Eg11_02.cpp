// Ex 11_02.cpp 
import std;
import roman;

int main()
{
  std::println("1234 is Roman numerals is {}", to_roman(1234));
  std::println("MMXXII in Arabic numerals is {}", from_roman("MMXXII"));
}

