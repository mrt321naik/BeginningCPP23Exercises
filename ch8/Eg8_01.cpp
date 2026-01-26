// Eg8_01.cpp - Calcualting powers

#include<iostream>
#include<print>

// Function to calculate x to the power namespace 

double power ( double x, int n)
{
  double result {1.0};
  if (n >= 0)
  {
    for (int i {1}; i <= n; ++i)
      result *= x;
  }
  else // n < 0
{
    for (int i {1}; i <= -n; ++i)
      result /= x;
  }
  return result;
}

int main()
{
  // calculate powers of 8 from -3 to +3

  for (int i {-3}; i <= 3; ++i)
  {
       std::print ("{:10g}", power(8.0,i));
  }

  std::println("");
}


