// Eg8_04.cpp - Modifying the value of a caller variable
#include<bits/stdc++.h>

double chageIt(double* pointer_to_it);    // Function prototype

int main()
{
  double it {5.0};
  double result {chageIt(&it)};           // Now we pass the address

  std::println("After function executoin, it = {}", it);
  std::println("Result returned is {}", result);
}

// Function to modify an argument and return it
double chageIt(double* pit)
{
  *pit += 10.0;                                       // This modifies the original double
  std::println("Within function, *pit = {}", *pit);
  return *pit;

}
