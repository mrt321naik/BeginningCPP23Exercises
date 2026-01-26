// Ex14_02.cpp - Calling base class constructors in a derived class constructors
import std;
import carton;  // For the carton class 

int main()
{
  // Create four Carton objects
  Carton carton1;         std::println("");
  Carton carton2 {"White-lined chipboard"}; std::println("");
  Carton carton3 {4.0, 5.0, 6.0, "PET"};    std::println("");
  Carton carton4 {2.0, "Folding boxboard"}; std::println("");

  Carton cart;                                    // Calls inherited default constructor
  Carton cube { 4.0 };                                 // Calls inherited constructor
  Carton copy { cube };                                // Calls default copy constructor
  Carton carton {1.0, 2.0, 3.0};                       // Calls inherited constructor
  Carton cerealCarton (50.0, 30.0, 20.0, "Chipboard"); // Calls Carton class constructor

  std::println("carton1 volume is {}", carton1.volume());
  std::println("carton2 volume is {}", carton2.volume());
  std::println("carton3 volume is {}", carton3.volume());
  std::println("carton4 volume is {}", carton4.volume());
}
 
