#include <iostream>
#include "LinkedList.hpp"

int main()
{
  LinkedList<int> LTest;

  LTest.insert(1);
  LTest.insert(2);
  LTest.insert(3);
  LTest.insert(4);
  LTest.insert(5);

  LTest.startIteration();

  while (LTest.hasNext())
    {
      std::cout << LTest.getNext() << std::endl;
    }

}

