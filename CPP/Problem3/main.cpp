
#include <iostream>


int main()
{
  int totalSum = 0;
  int fibNum = 1;
  int lastFibNum = 1;
  int tmp;
  while( fibNum < 4000000 )
  {	
  	tmp = fibNum + lastFibNum;

    if (tmp % 2 == 0)
    {
      totalSum += tmp;

    }

    lastFibNum = fibNum;
    fibNum = tmp;
  }


  std::cout << "Sum = " << totalSum << "\n" << std::endl;
}



