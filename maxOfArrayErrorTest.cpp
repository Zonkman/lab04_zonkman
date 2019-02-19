#include "arrayFuncs.h"
#include "tddFuncs.h"

int main() {

  int nothing[] = {};
  assertEquals(0,
	       maxOfArray(nothing,0),
	       "maxOfArray(nothing,0)");
  
  return 0;

}
