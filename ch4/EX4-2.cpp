#include<iostream>
#include<print>

int main()
{
  int a {};
  int b {};

  std::println("Write two integers here");
  std::cin >> a >> b;

  if ( (a || b) <= 0 )
  {
    std::print(" no the numbers are less than zero. Please enter positive integers only ");
  }

  else if ( a % b == 0 ) {

    std::println(" Nice the numberr {} is a multiple of {}", a, b);
    
  }

  else 
  {
    std::println("The program is not a multiple of the other");
  }

  return 0;
  
}
