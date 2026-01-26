// Ex6_05.cpp - Calculating primes using pointer notation
#include<iostream>
#include<print>

int main() 
{
  const unsigned max {100};           // Number of primes requires
  unsigned long primes[max] {2};      // Frist prime defined
  unsigned count {1};                 // Count for primes found so far
  unsigned long trial {3};            // Candidate prime

  while (count < max)
  {
    bool isprime {true};              // Indicated when a prime is found

    // Try dividing the candidate by all primes we have
    for(unsigned i {}; i < count && isprime; ++i)
    {
      isprime = trial % *(primes + i) > 0;      // False for exact division
    }

    if (isprime)
    {                                           // We got one...
      *(primes + count++) = trial;              // ... so save it in prime's array
    }

    trial += 2;                                 // Next value for checking
  }

  // Output primes 10 to a line
  std::println("The first {} primes are:", max);
  for(unsigned i{}; i < max; ++i)
  {
      std::print("{} ", *(primes + i));
      if ((i+1) % 10 == 0)                      // Newline after every 10th prime
      std::println(" ");
  }
  std::println(" ");
}
