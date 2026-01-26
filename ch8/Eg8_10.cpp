#include<bits/stdc++.h>

void double_it(double& it) { it *= 2;}
void print_it(const double& it) { std::println("{}", it);}

int main()
{
  double d{123};
  double_it(d);
  print_it(d);


  int i{456};
  // double_it(i);        /* error, this does NOT compile! */
  print_it(i);
}
