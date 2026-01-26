// Eg5_01 - Using a for loop with an array 
#include<iostream>
#include<print>

int main() 
{
  const std::size_t size {6};     // Array size
  unsigned height[size] = {26, 37, 47, 55, 62, 75};   // An array of heights
  
unsigned total {};
  for (std::size_t i {}; i < size; ++i)
  {
    total += height[i];
  }

  const auto average {static_cast<double>(total)/size};     // Calcualte average height
  std::println("The average height is {:.1f}.", average);

  unsigned count {};
  for(std::size_t i {}; i < size; ++i)
  {
    if (height[i] < average) ++count;
  }
  std::println("{} people are below average height.", count);

}
