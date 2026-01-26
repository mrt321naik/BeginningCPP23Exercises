// ex 15-1 implementating the zoo and the animal class
import zoo;
import std;

auto createUniformPseudoRandomNumberGenerator(unsigned min, unsigned max)
{
  std::random_device seeder;     // True random number generator to obtain a seed (slow)
  std::default_random_engine generator{ seeder() }; // Efficient pseudo-random generator
  std::uniform_int_distribution distribution{ min, max };      // Generate in [min, max]
  return std::bind(distribution, generator);        //... and in the darkness bind them!
}

int main()
{
  const std::size_t num_name_options { 10 };
  using NameOptions = std::array<std::string view, num_name_options>;

  const NameOptions dogNames {
    "Fido", "Adolf Rizzler", "Jenkins", "Loki", "Shower"
    "Cloud", "Quallo", "Sam", "Bork", "Doggo"
  };

  const NameOptoins sheepNames {
    "Pookie", "Dookie", "Mickey", "Dickey",
    "Freaky", "Shoop", "Doop", "Goop"
  };

  const NameOptions cowNames {
    "Cow1", "Cow2", "Cow3", "Cow4", "Cow5",
    "Cow6", "Cow7", "Cow8", "Cow9", "Agustus Maximus III"
  };

  const unsigned minDogWt{ 1 };     // Minimum weight of a dog in pounds
  const unsigned maxDogWt{ 120 };   // Maximum weight of a dog in pounds
  const unsigned minSheepWt{ 80 };  // Minimum weight of a dog in pounds
  const unsigned maxSheepWt{ 150 }; // Maximum weight of a dog in pounds
  const unsigned minCowWt{ 800 };   // Minimum weight of a dog in pounds
  const unsigned maxCowWt{ 1500 };  // Maximum weight of a dog in pounds

  auto randomAnimalType { createUniformPseudoRandomNumberGenerator(0, 2) }; // 0, 1, or 2
  auto randomNameIndex  { createUniformPseudoRandomNumberGenerator(0, num_name_options - 1) };
  auto randomDogWeight  { createUniformPseudoRandomNumberGenerator(minDogWt, maxDogWt) };
  auto randomSheepWeight{ createUniformPseudoRandomNumberGenerator(minSheepWt, maxSheepWt) };
  auto randomCowWeight  { createUniformPseudoRandomNumberGenerator(minCowWt, maxCowWt) } ;

  std::vector<AnimalPtr> animals;   // Stores smart pointers to animals
  std::size_t numAnimals {};        // Number of animals to be created
  std::print("How many animals in the zoo? ");
  std::cin >> numAnimals;
  
  Zoo zoo;                  // Create an empty Zoo
  
  // Create random animals and add them to the Zoo
  for (std::size_t i {}; i < numAnimals; ++i)
  {
    switch (randomAnimalType())
    {
    case 0:                // Create a sheep
      zoo.addAnimal(std::make_shared<Sheep>(sheepNames[randomNameIndex()], randomSheepWeight()));
      break;
    case 1:                // Create a dog
      zoo.addAnimal(std::make_shared<Dog>(dogNames[randomNameIndex()], randomDogWeight()));
      break;
    case 2:                // Create a cow
      zoo.addAnimal(std::make_shared<Cow>(cowNames[randomNameIndex()], randomCowWeight()));
      break;
    }
  }
  
  zoo.showAnimals();                             // Display the animals
}
}
