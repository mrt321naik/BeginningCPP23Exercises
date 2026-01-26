// Eg5_16.cpp - Format specifiers for containers
#include<iostream>
#include<print>
#include<vector>

int main() 
{
  std::vector v{ 1, 2, 3, 4, };       // Deduced type std::vector<int>
  std::println("Default formating: {}", v);       // [1, 2, 3, 4]
  std::println("No braced: {:n}", v);       // 1, 2, 3, 4
  std::println("Curly braces: {{{:n}}}", v);      // {1, 2, 3, 4}
  std::println("Format range only: {:*^20}", v);    // ****[1, 2, 3, 4]****
  std::println("Format elements only: {::*<3}", v);     // [1**, 2**, 3**, 4**]
  std::println("Format elements only: {::*<3}", v);     // [1**, 2**, 3**, 4**]
  std::println("All at once: {:*^20n:03b}", v);         // *001, 010, 011, 100*
}
