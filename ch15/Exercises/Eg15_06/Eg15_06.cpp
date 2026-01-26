// Ex15_06.cpp - Polymorphic vectors of smart pointers
import std;
import boxes;

int main()
{
  // Careful : this first attempt at a mixed collection is a bad idea (object slicing!)
  std::vector<Box> boxes;
  boxes.push_back(Box{20.0, 30.0, 40.0}); 
  boxes.push_back(ToughPack{20.0, 30.0, 40.0});
  boxes.push_back(Carton{2.0, 3.0, 4.0, "plastic"});

  for (const auto& box : boxes)
    box.printVolume();

  std::println("");

  // Next, we create a proper Polymorphic vector<>:
  std::vector<std::unique_ptr<Box>> PolymorphicBoxes;
  PolymorphicBoxes.push_back(std::make_unique<Box>(20.0, 30.0, 40.0));
  PolymorphicBoxes.push_back(std::make_unique<ToughPack>(20.0, 30.0, 40.0));
  PolymorphicBoxes.push_back(std::make_unique<Carton>(20.0, 30.0, 40.0, "plastic")); 

  for (const auto& box : PolymorphicBoxes)
  box->printVolume();
}
