// Ex10-3.cpp an exercise to write one or more functoin templates to call a plus() function with two functoin arguments of potentially different types.

#include<iostream>
#include<print>

template<typename T> T& plus(auto a, auto b);

int main()
{

  std::pritnln("the result of the sum of 2 values are {} plus {} is {}", plus( 1, 3));

}

template <typename T>
T plus(auto a, auto b)
{
  return a + b;
}


