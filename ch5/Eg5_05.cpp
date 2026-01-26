// Eg5_05.cpp - Using a while loop to calculate the sum of integers from 1 to n and n!
#include<iostream>
#include<print>

int main()
{
  unsigned int limit {};
  std::print("This program calculates n! and the sum of integers up to n ");
  std::print("for values 1 to limit.\nWhat upper limit for n would you like? ");
  std::cin >> limit;

  // Output column headings
  std::println("{:>8} {:>8} {:>20}", "integer", "sum", "factorial");

  unsigned int n{};
  unsigned int sum{};
  unsigned long long factorial {1ULL};

  while (++n <= limit)
  {
    sum += n;     // Accumulate sum to current n
    factorial *= n; // Calcualte n! for current n
    std::println("{:8} {:8} {:20}", n, sum, factorial);
  }
}
