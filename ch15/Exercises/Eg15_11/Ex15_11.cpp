// Ex15_11.cpp - Using an abstract class
import std;
import boxes;

int main()
{
  ToughPack hardcase {20.0, 30.0, 40.0 };         // A derived box - same size
  Carton carton {20.0, 30.0, 40.0, "plastic"};    // A different derived box

  Box* base {&hardcase};                          // Base pointer - derived address
  std::println("hardcase volume is {}", base->volume()); 

  base = &carton;                                       // New derived address
  std::println("carton volume is {}", base->volume());
}
