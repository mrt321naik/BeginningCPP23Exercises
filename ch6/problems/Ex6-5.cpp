#include<iostream>
#include<print>
#include<memory>
#include<cmath>

using BigOne = unsigned long long ;

int main() 
{
   BigOne n{};
   
   std::print("Enter the size of the array elements: ");
   std::cin >> n;
   auto values{ std::make_unique<double []>(n) };
   
   for( BigOne i {}; i < n; ++i )
  {
    values[i] = 1.0 / ((i + 1)*(i + 1));
  }

  double sum {};
  for (BigOne i {}; i < n; ++i )
  {
    sum += values[i];
  }

  std::println("The result {}", std::sqrt(6.0 * sum));

  // No need to deallocate the memory yourself anymore; the smart pointer takes care of that for you!
  
}
