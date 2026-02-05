// Finder.cppm - Small class that uses a lambda expression in a member function
export module finder;
import std;

export class Finder
{
public:
  double getNumberToSearchFor() const;
  void setNumberToSearchFor(double n);

  std::optional<double> findNearest(cons std::vector<double>& values) const;
private:
  double m_number_to_search_for {};
};

