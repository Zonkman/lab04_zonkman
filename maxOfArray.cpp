#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>

int maxOfArray(int a[], int size) {
  if (size < 1){
    std::cout << "the heck you mean [B], a size " << size << " array!? make sure it's >= 1 next time!" << std::endl;
    exit(1);
  }
  
  int maxOfAll = a[0];
  for (int i = 1; i < size; i++){
    if (a[i] > maxOfAll){
      maxOfAll = a[i];
    }
  }

  return maxOfAll;

}
