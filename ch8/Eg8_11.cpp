// Eg8_11.cpp - Using multiple defaulta argument values

#include<bits/stdc++.h>

// The function prototype including default arguments
void print_data(const int data[], std::size_t count = 1, 
                  const std::string& title = "Data Values",
                  unsigned width = 10, unsigned perLine = 5);

int main()
{
  int samples[] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

  int dataItem {-99};
  print_data(&dataItem);

  dataItem = 13;
  print_data(&dataItem, 1, "Unlucky for some!");

  print_data( samples, std::size(samples));
  print_data( samples, std::size(samples), "Samples");
  print_data( samples, std::size(samples), "Samples", 6);
  print_data( samples, std::size(samples), "Samples", 8, 4);
}

