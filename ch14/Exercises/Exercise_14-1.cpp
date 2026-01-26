import std;

class Animal {
public:
  Animal(std::string_view name, int weight);

  void who() const // Display name an weight
{
std::println("Hello, my name is {} and my weight is {} lbs", m_name, m_weight);
  }
  Animal(Animal &&) = default;
  Animal(const Animal &) = default;
  ~Animal() {};

private:

  std::string m_name;
  int m_weight;
  
};

class Lion : public Animal
{
public:
  Lion(std::string_view name, int weight);
};

  class Ardvark : public Animal
{
public : using Animal::Animal;
};


int main()
{
  Lion myLion{"Leo", 400};
  Ardvark myArdvark{"Algernon", 50};

  myLion.who();

  myArdvark.who();

}
