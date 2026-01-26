export module box;

export class box
{
public:
  Box() : Box{ 1.0, 1.0, 1.0 } {}        // A delegating default constructor
  Box(double length, double width, double height);

  double volume() const;    // Function to calcualte the volume of the box

  friend double surfaceArea(const Box& box);    // Friend function for the surface surfaceArea

private:
  double m_lenght, m_width, m_height;
};
