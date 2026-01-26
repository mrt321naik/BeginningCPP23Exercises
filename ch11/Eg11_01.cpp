// Eg11_01.cpp - Consuming your own module
import std;
import math;

int main()
{
  std::println("Lambda squared: {}", square(lambda));

  int number;
  std::print("\nPlease enter an odd number: ");
  std::cin >> number;
  std::println("");

  switch (getOddity(number))
  {
    using enum Oddity;
    case Odd:
      std::println("Well done! And remember: you have to be odd to be number one!");
    break;
    case Even:
      std::println("Odd, {} appears to be even?", number);
    break;
  }
}
