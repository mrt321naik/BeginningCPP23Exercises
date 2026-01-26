import integer;
import std;

int main()
{
  std::println("Create i with value 10.");
  Integer i {10};
  i.printValue();
  std::println("Change value i to 15.");
  i.setValue(15);
  i.printValue();

  std::println("Create j with a value that is 150 times greater than i.");
  const Integer j {150 * i.getValue()};
  j.printValue();
}
