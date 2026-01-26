// Ex6_06.cpp - Calcualting primes using dynamic memeory allocation
#include<iostream>
#include<print>
#include<cmath>


int main() 
{
  unsigned max {};        // Number of primes required
  
  std::print("How many primes would you like?");
  std::cin >> max;

  if (max == 0) return 0;           // Read number required
  
  auto* primes {new unsigned long[max]};    // Allocate memeory for max primes

  unsigned count {1};               // Count for primes found
  primes[0] = 2;                    // Insert first seed primes

  unsigned long trial {3};          // Initial canditate primes

  while (count < max)
  {
    bool isprime {true};            // Indicated when a prime is found
    
    const auto limit { static_cast<unsigned long>(std::sqrt(trial)) };
    for (unsigned i {}; primes[i] <= limit && isprime; ++i)
    {
      isprime = trial % primes[i] > 0;    // False for exact division
    }

    if (isprime)                          // We got one...
      primes[count++] = trial;            //.... so save it in primes memeory

    trial += 2;                           // Next value for checking
  }

  // Outupt primes 10 to a line
  for (unsigned i{}; i < max; ++i)
  {
       std::print("{:10}", primes[i]);
       if ((i + 1) % 10 == 0)             // After every 10th prime...
          std::println("");               // ...start a new line
  }
  std::println("");

  delete[] primes;                        // Free up memeory...
  primes = nullptr;                       // ... and reset the pointer
}
