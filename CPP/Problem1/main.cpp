
#include <iostream>


int main()
{
  int totalSum = 0;

  for( int i = 1 ; i < 1000 ; i++)
  {
    if ( (i % 3 == 0) || (i % 5 == 0) )
    {
      totalSum += i;
    }
  }


  std::cout << "Sum = " << totalSum << "\n" << std::endl;
}



