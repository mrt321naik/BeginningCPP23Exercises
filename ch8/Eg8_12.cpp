// Eg8_12.cpp - Program that echoes command line arguments
#include<bits/stdc++.h>

int main( int argc, char* argv[])
{
  for (int i {}; i < argc; ++i)
  {
       std::println("{}", argv[i]);
  }
}

