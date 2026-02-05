// eg19_06.cpp 
// Using a default capture-by-value clause to access a local variable
// from within the body of a lambda expression.
import std;
import optimum;

int main()
{
  std::vector numbers { 91, 18, 92, 22, 13, 43 };

  int number_to_search_for {};
  std::print("Please enter a number: ");
  std::cin >> number_to_search_for;

  auto nearer { [=](int x, int y) {
    return std::abs(x - number_to_search_for) < std::abs(y - number_to_search_for);
  }};
  std::println("The number nearest to {} is {}", 
               number_to_search_for, *findOptimum(numbers, nearer));
}
