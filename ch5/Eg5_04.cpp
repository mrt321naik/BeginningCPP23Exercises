// Eg5_04.cpp - Multiple initializations in a loop expression
#include<iostream>
#include<print>

using BigOnes = unsigned long long;

int main() 
{
  unsigned int limit {};
  std::print("This program calculates n! and the sum of integers upto n ");
  std::print("for values 1 to limit.\nWhat upper limit for n would u like? ");
  std::cin >> limit;

  // Output column headings
  std::println("{:>8} {:>8} {:>20}", "integer", "sum", "factorial");

  for (BigOnes n {1}, sum {}, factorial {1}; n <= limit; ++n)
       {
    sum += n;       // Accumulate sum to current n
    factorial *= n;     // Calculate n! for current n
       std::println("{:8} {:8} {:20}", n, sum, factorial);
  }
}
