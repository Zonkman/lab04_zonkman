#include "arrayFuncs.h"
#include "utility.h"
#include <cstdlib>
#include <iostream>

int countEvens(int a[], int size) {
  if (size < 0){
    std::cout << "tryina hit me with that size " << size << " crap? bruh it gotta be >=0!" << std::endl;
    exit(1);
  }

  int counter = 0;
  for (int i = 0; i < size; i++){
	  int element = a[i];
	  if (isEven(element)){
	    counter++;
	  }
  }

  return counter;

}
