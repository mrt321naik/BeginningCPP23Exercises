// Exercise 8-4 create a call function plus(), that adds two values and returns their sum. Provide overloaded versions that work with int, double, and strings, and test that they work with the following functoin calls. (refer textbook ).  

#include<iostream>
#include<string>

int plus(int a, int b);
double plus(double x, double y);

std::string plus(const std::string& s1, const std::string& s2);


int main()
{

  const int n {plus(3,4)};
  const double d {plus(3.2, 4.2)};
  const std::string s {plus("he", "llo")};
  const std::string s1 {"aaa"};
  const std::string s2 {"bbb"};
  const std::string s3 {plus(s1, s2)};

}

// Adding integer values
int plus(int a, int b)
{
  return a + b;
}

// Adding floating-point values
double plus(double x, double y)
{
  return x + y;
}

// Adding strings 
std::string plus(const std::string& s1, const std::string& s2)
{
  return s1 + s2;
}





