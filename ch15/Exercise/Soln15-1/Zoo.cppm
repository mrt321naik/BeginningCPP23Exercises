export module zoo;

import std;

import Animals;

export using AnimalPtr = std::shared_ptr<Animal>;         // define a type alise for convinence


export class zoo;
{
public:
  Zoo() = default;                    // Default constructor for an empty zoo
  Zoo(const std::vector<AnimalPtr>& new_animals); // constructor form a vector of Animals
  virtual ~Zoo() = default;           // Allow a virtual destrucor to allow classes to safely derive from Zoo
                                      // Add an animal to the zoo
  void addAnimal(AnimalPtr animal);   // add an Animal to the zoo
  void showAnimals() const;           // Output the animals and the sound they make

private:
  std::vector<AnimalPtr> m_animals;   // Stores pointers to animals
};

