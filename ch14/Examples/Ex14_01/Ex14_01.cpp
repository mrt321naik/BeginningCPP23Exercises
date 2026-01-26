// Ex14_01.cpp - Defining and using a derived class
import std;
import box;
import carton;

int main()
{
  // Create a Box object and two Carton objects
  Box box {40.0, 30.0, 20.0};
  Carton carton;
  Carton chocolateCarton {"Solid bleached board"}; // Good old SBB
  // Check them out - sizes first of all
  std::println("box Occupies {} bytes", sizeof(box));
  std::println("carton occupies {} bytes", sizeof carton);
  std::println("chocolateCarton occupies {} bytes", sizeof chocolateCarton);

  //Now volumes...
  std::println("box volume is {}", box.volume());
  std::println("carton volume is {}", carton.volume());
  std::println("choclateCarton volume is {}", chocolateCarton.getLength());
}
