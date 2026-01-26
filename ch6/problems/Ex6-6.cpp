#include<iostream>
#include<print>
#include<memory>
#include<cmath>


using BigOnes = unsigned long long;

int main() 

{
  BigOnes n {};

  std::print("Enter the number of vector elements: ");
  std::cin >> n;

  auto values { std::make_unique<std::vector<double>>(n) };

  for ( BigOnes i {}; i < n; ++i )  
  {
    (*values)[i] = 1.0 / ((i + 1)*(i + 1));

  }

  double sum {};
  for (auto value : *values)
  { 
    sum += value; 
  }

  std::println("Result is {}", std::sqrt(6.0*sum));


}
