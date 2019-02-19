#include "arrayFuncs.h"

int sumOfArray(int a[], int size) {
  //return 0; ok what the heck? was it a stub? maybe it didn't even deserve a comment. :(

  if (size < 0){
    std::cout << "i'm sorry ma'am but our company only deals with non-negative array sizes." << std::endl;
    exit(1);
  }

  int sum = 0;
  for (int i = 0; i < size; i++){
    sum += a[i];
  }

  return sum;
}
