// Exercise 15-1 Animals.cppm
// Animal classes
export module animals;

import std;

export class Animal
{
public:
  Animal(std::string_view name, unsigned weight); // Build a constructor
  virtual ~Animal() = default;
  virtual std::string who() const;                // Return the string containing the name and weight
  virtual std::strint_view sound() const = 0;     // Return the sound of the animal

private:
  std::string m_name;                           // Name of the animal
  unsigned m_weight;                            // weight of the animal
};

export class Sheep : public Animal
{
public:
  using Animal::Animal;                       // Inherit constructor
  std::string_view sound() const override;    // To return the sound of a sheep 
};

export class Dog : public Animal
{
public:
  using Animal::Animal;                     // Inherit constructor
  std::string_view sound() const override; // To return the sound of a dog
};

export class Cow : public Animal
{
public:
  using Animal::Animal;                     // Inherit constructor
  std::string_view sound() const overrice; // To return the sound of a cow
}
