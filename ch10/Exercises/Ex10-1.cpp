/* Exercise 10-1 an cpp program to write our own implementation of the std::clamp functoin using functoin tmeplates */

#include<iostream>
#include<print>

template <typename T, auto lower, auto upper> 
bool is_in_range(const T& value)
{
  return (value <= upper) && (value >= lower);
}
// Our own implemetatoin of the std::clamp function 

int main()
{

  std::println("{}", is_in_range<0,500>(value));
}

