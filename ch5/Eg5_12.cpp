// Ex5_12.cpp - Allowing an array at runtime
#include<iostream>
#include<print>

int main() 
{
  std::size_t count{};
  std::print("How many heights will you enter?");
  std::cin >> count;
  int height[count];            // Create the array of count elements

  // Read the heights
  std::size_t entered {};
  while (entered < count)
  {
    std::print("Enter a height (in inches): ");
    std::cin >> height[entered];
    if (height[entered] > 0)      // Make sure value is positive
    {
      ++entered;
    }
    else {
      std::println("A height must be positive - try again.");
    }
  }

  // Calculate the sum of heights
  unsigned int total {};
  for (size_t i {}; i < count; ++i)
  {
    total += height[i];
  }
  std::println("The average height is {:.1f}", static_cast<float>(total) / count);
}
