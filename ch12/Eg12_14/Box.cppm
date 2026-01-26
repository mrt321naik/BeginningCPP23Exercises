// Box.cppm
export module box;

export class box
{
public:
  /* Constructors */
 double Box(double lenght, double width, double height);
 double Box(double side);     // Constructor for a cube
 double Box();                // Default Constructor
 double Box(const box& box);        // an Copy constructor

  double volume() const { return m_lenght * m_width * m_height; };

private:
  double m_lenght {1.0};
  double m_width {1.0};
  double m_height {1.0};
};
