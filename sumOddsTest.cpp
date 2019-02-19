#include "arrayFuncs.h"
#include "tddFuncs.h"

int main() {

  int fiveThrees[5] = {3,3,3,3,3};
  assertEquals(15,
	       sumOdds(fiveThrees,5),
	       "sumOdds(fiveThrees,5)");

  int zeros[3] = {0,0,0};
  assertEquals(0,
	       sumOdds(zeros,3),
	       "sumOdds(zeros,3)");

  int fiveInts[5] = {65,66,-67,68,69}; //69 hahaha!!!!!!1one
  assertEquals(67,
	       sumOdds(fiveInts,5),
	       "sumOdds(fiveInts,5)");
  
  assertEquals(-2,
	       sumOdds(fiveInts,3),
	       "sumOdds(fiveInts,3)");
  
  assertEquals(65,
	       sumOdds(fiveInts,2),
	       "sumOdds(fiveInts,2)");

  int meaning[] = {-42};

  assertEquals(0,
	       sumOdds(meaning,1),
	       "sumOdds(meaning,1)");
  
  int mix[11] = {-1000000005,-200000005,-30000005,-4000000,-500008,-60005,-7000,820,23,-3,0};
  
  assertEquals(-1230060000,
	       sumOdds(mix,11),
	       "sumOdds(mix,11)");

  return 0;
}
