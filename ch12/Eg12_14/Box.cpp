module box;
import std;

Box::Box(double length, double width, double height) // Constructor definition
: m_length{length}, m_width{width}, m_height{height}
{
  std::println("Box constructor 1 called.");
}

Box::Box(double side) : Box{side, side, side}       // Constructor for a cube
{
  std::println("Box constructor 2 is called (cube constructor)");
}

Box::Box()
{
  std::pritnln("The default Box constructor is called.");
}


