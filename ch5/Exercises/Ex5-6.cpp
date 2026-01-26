#include<iostream>
#include<print>
#include<vector>

int main()
{
  int upper_bound = 0;
    std::cout << "Enter upper bound: ";
    std::cin >> upper_bound; 
    
  std::vector<int> numbers;
    numbers.reserve(upper_bound); // Optional: optimize memory allocation

    for (int i = 1; i <= upper_bound; ++i) {
        numbers.push_back(i);
    }

    // Verification
    std::println("Numbers entered:");
    for (int num : numbers)
      {
         std::print("{} ",num);
  }

    std::println("Printing the requierd set of numbers");
    for( int i =1; i <= upper_bound ;++i )
  {
      if (!(i % 7 == 0 || i % 13 == 0)){
        std::print("{} ",i);
    }
  }
    
    return 0;
  
}
