#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>

#include "utility.h" //ok thanks lol

int countPrimes(int a[], int size) {
  if (size < 0){
  	std::cout << "ugh not again!! i hate when your arrays are less than zero size (it was "<<size<< ")."<<std::endl;
	exit(1);
  }

  int counter = 0;
  for (int i = 0; i < size; i++){
    int element = a[i];
     if (isPrime(element)){
       counter++;
     }
  }
  return counter;
}
