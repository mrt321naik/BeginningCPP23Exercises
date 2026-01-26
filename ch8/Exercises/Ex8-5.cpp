#include<iostream>
#include<cmath>
#include<vector>
#include<print>


bool isPrime(int n);
std::vector<size_t> generateNumbers(size_t to, size_t from = 1);
std::vector<size_t> filterPrimeNumbers(const std::vector<size_t>& numbers);



int main() 
{
  size_t user_number{};
  std::print("Would you be so kind as to enter a number? ");
  std::cin >> user_number;
  
  const auto numbers{ generateNumbers(user_number) };
  const auto primes{ filterPrimeNumbers(numbers) };
  
  unsigned count{};
  for (auto& prime : primes)
  {
    std::print("{:8}", prime);
    if (++count % 15 == 0)
      std::println("");
  }
  
  std::println("");
  return 0;

}

bool isPrime(int n)
{
  
  if (n <= 1) return false;

  for (size_t i {2}; i <= (n / 2); ++i )
  {
    if (n % i == 0) return false;
  }

  return true;

}


std::vector<size_t> generateNumbers(size_t to, size_t from  ) 
{
  std::vector<size_t> result;
  for ( size_t i{ from }; i <= to; ++i ) 
  {
    result.push_back(i);


  }

  return result;
}


std::vector<size_t> filterPrimeNumbers(const std::vector<size_t>& numbers)
{
  std::vector<size_t> result;
  for(auto number: numbers)
  {

  if(isPrime(number))
    result.push_back(number);
    }
  return result;
}


