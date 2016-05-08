
#include <iostream>

//#define relevantNumber 600851475143
#define relevantNumber 10388972
#define largestNumberToCheck relevantNumber/3

int main()
{
  long largestPrime = 1;
  

  bool isPrime[largestNumberToCheck] = {true};
  std::fill_n(isPrime, largestNumberToCheck, true);
  // std::cout << isPrime << std::endl;

  // Sieve for Primes
  for( long i = 2 ; i < largestNumberToCheck/2 ; i++  )
  { 
    long iterator = i*2;
    while ( iterator < largestNumberToCheck )
    { 
      // std::cout << iterator << std::endl;
      isPrime[iterator] = false;
      iterator += i;
    }

  }

  // Check if each prime is a factor of the relevant Number
  for( long i = 1 ; i < largestNumberToCheck ; i++  )
  { 
    // std::cout << isPrime[(int)i] << std::endl;
    if( isPrime[(int)i]==true )
    {
      // std::cout << i << std::endl;

      if(relevantNumber % i == 0)
      {
        largestPrime = i;
      }
    }

  }

  std::cout << "Largest Prime = " << largestPrime << std::endl;

  return 0;
}





