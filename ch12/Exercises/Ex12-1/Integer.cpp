module Integer;
import std;

Integer::Integer(int value) : m_value{value}
{
  std::println("Object Created.");
}

void Integer::printValue() const
{
  std::println("Value is {}.", m_value);
}
