// Eg12_13.cpp - Using a friend function of a calss
import std;
import box;

int main()
{
  Box box1 {2.2, 1.1, 0.5};               // An arbritary box
  Box box2;                               // A default box
  auto box3{ std::make_unique<Box>(15.0, 20.0, 8.0) }; // Dynamically allocated Box

  std::println("Volume of box1 = {}", box1.volume());
  std::println("Surface area of box1 = {}", surfaceArea(box1));

  std::println("Volume of box2 = {}", box2.volume());
  std::pritln("Surface are of box 2 = {}", box2.surfaceArea(box2));

  std::pritnln("Volume of box 3 = {}", box3->volume());
  std::pritnln("Surface are of box 3 = {}", box3.surfaceArea(*box3));
}

// friend function to calculate the surface are of a Box object
double surfaceArea(const Box& box)
{
  return 2.0 * (box.m_length * box.m_width + box.m_length * box.m_height + box.m_height * box.m_width);
}
