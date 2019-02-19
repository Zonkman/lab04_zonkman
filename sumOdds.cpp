#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>

#include "utility.h" // noice

int sumOdds(int a[], int size) {
  if (size < 0){
    std::cout<< "it's impressive how you got an array to be negative size, but i can't really accept that. sorry :("<<std::endl;
    exit(1);
  }

  int sum = 0;
  for (int i = 0; i < size; i++)
  {
    int element = a[i];
    if (isOdd(element)){
      sum += element;
    }
  }

  return sum;

}
