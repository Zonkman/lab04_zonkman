// utility.cpp

// IN THIS FILE, define any of your OWN functions you may need to 
// solve the problems.    

// For example, if you need an isPrime function, you can put the function
// definition in this file.  Similarly, isOdd or isEven might be useful.

// You will need to include the function prototype in "utility.h" and
// then be sure to  #include "utility.h" in the file where you use
// these functions

#include <vector> //this is for the dynamic array in isPrime
#include <cmath> //also for isPrime (the square root function)

bool isOdd(int x) { 
  return (abs(x)%2)==1; //ez
}

bool isEven(int x) { 
  return (abs(x)%2)==0; //ez
}

/*
 * now I just wanna say that isPrime() is considerably more complex than it should be.
 * I've done this exercise of finding prime numbers in other programming courses, and
 * usually I'd create a list outside of the function which stores the prime number list
 * to use again later, adding more primes when it was necessary to generate them.
 * it's one of those tradeoffs between memory and speed.
*/
std::vector<int> primeList(1,2); //global variable :( i know but bear with me. so far the list is just {2}.

bool isPrime(int x) { 
  if (x <= 1){ //yall smallee numbers don't even bother
    return false;
  }
  //phase 1: expand the prime number list (if needed)
  for (int n = primeList[primeList.size()-1]+1; n <= (int)sqrt(x); n++){ 
	  //try all the numbers up to this (int)sqrt(x) whomst'd rounds down
      bool newAddition = true;
      for (int i = 0; i < (int)primeList.size(); i++){ //tests new additions.
        if (primeList[i] > (int)sqrt(n)){ //again we only gotta check up to square root.
	  break;
	}
        if (n % primeList[i] == 0){ //yeet that composite
	  newAddition = false;
	  break;
	}
      }
      if (newAddition){
        primeList.resize((int)primeList.size()+1); //welcome to
	primeList[(int)primeList.size()-1] = n; //the prime club
      }
    }
  //phase 2: test the actual number
  for (int i = 0; i < (int)primeList.size(); i++){
    if (primeList[i] > (int)sqrt(x)){ //basically we're done, the same as after this loop happens
      return true;
    }
    if (x % primeList[i] == 0){ //composite
      return false;
    }
  }
  return true; //either composite or prime, and it's not composite!
}
