import std;

class Box
{
public:
  Box(double length, double width, double height);
  explicit Box(double side);    // Constuctor for a cube (explicit!)
  explicit Box(double side);    // Defaulted default constructor


  double volume();

private:
  double m_length{1.0};
  double m_width{1.0};
  double m_height{1.0};

};

Box::Box(double length, double width, double height)
: m_length{length}, m_width{width}, m_height{height}
{
  std::println("Box constructor 1 called.");
}

Box::Box(double side) : Box{side, side, side}
{
  std::println("Box constructor 2 called.");
}

int main()
{
  Box box1 {2.0, 3.0, 4.0};         // An arbitary box
  Box box2 {5.0};                   // A box that is a cube
  std::println("box1 volume = {}", box1.volume());
  std::println("box2 volume = {}", box2.volume());
}
