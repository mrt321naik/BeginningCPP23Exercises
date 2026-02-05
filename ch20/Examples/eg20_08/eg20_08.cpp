// eg20_08.cpp - Altering elements through a mutable iterator
import std;
import box;

int main()
{
  std::vector boxes{ Box{ 1.0, 2.0, 3.0 } };  // A std::vector<Box> containing 1 Box

  auto iter{ boxes.begin() };
  std::println("{}", iter->volume());

  *iter = Box{ 2.0, 3.0, 4.0 };
  std::println("{}", iter->volume());

  iter->setHeight(7.0);
  std::println("{}", iter->volume());
}
