// Eg4_10.cpp - Switching on enumeration values
#include<iostream>
#include<print>

int main() 
{
  enum class Color { red, green, blue };

  Color my_color = Color::red;

  std::print("Today, I'm feeling ");
  switch (my_color)
  {
    case Color::red: std::println("loving"); break;
    case Color::green: std::println("Jealous"); break;
    case Color::blue: std::println("sad"); break;
    default: std::println("You didn't enter a color"); 
  }
}
