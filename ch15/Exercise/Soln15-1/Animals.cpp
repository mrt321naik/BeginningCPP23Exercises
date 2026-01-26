// Implement the sounds of the animals using the module

module animals;

// Constructor
Animal::Animal(std::string_view name, unsigned weight)
: m_name { name }, m_weight { weight }
{}

// Return string describing the Animal
std::string Animal::who() const 
{
  return "My name is " + m_name + ". My weight is " + std::to_string(m_weight) + "lbs";
}

std::string_view Sheep::sound() const
{
  return "Baaaa!!";
}

std::string_view Dog::sound() const
{
  return "Woof woof!!";
}

std::string_view Cow::sound() const
{
  return "Moo!!";
}
