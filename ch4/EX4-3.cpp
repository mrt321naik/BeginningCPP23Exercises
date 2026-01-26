#include<iostream>
#include<print>

int main() 
{
  int num {};

  std::println("Enter an number");
  std::cin >> num;

  if ( num > 0){
    if ( num >= 1 && num <= 100)
    {
      std::println("Yes your number is within the range of 1 - 100");

      if (num < 50)
      {
        std::print("and the number is less than 50");
      }
      if(num > 50)
      {
        std::print("and the number is greater than 50");
      }

      else if (num == 50) { std::print("and the number is equal to 50"); }
      
    }
    else { std::println("the number is out of range of 1-100");}
  }
}
