#include<iostream>
#include<bitset>

int main() 
{
 char c; 
 dynamic_cast<char>(c) {};

  std::cout << "Enter a character:  ";
  std::cin >> c;

  if( std::isalpha(c))
  {
    std::cout << "You have entered a letter ";
    if ( std::islower(c))
    {
      std::cout << " And it is lower case. ";

      switch (c) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
          std::cout << "The letter is a vowel";
          break;
        default:
          std::cout << "The letter is a consonant.";
      }

    }
    else {
      std::cout << "The character is a letter but it is an upper case letter . ";
    }

    std::cout << "The letter you entered is: " << c << "and the binary representation is: " << std::bitset<c>;

  }

  else {
    std::cout << "Error you have entered an invalid character";
  }
}
