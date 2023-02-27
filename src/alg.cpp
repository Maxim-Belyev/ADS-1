// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"
bool checkPrime(uint64_t value) {
  if (value<2) {
		return false;
	  }
	for (int i = 2; i < value; i++) {
		if (value % i == 0) {
			return false;
		}
	}
	return true;
}
uint64_t nPrime(uint64_t n) {
  int Num = 2;
	int i = 0;
	while (1) {
		if (checkPrime(Num) == 1) {
			i++;
		}
		if (i == n) {
			break;
		}
		Num++;
    }
	return Num;
}
uint64_t nextPrime(uint64_t value) {
  while (1) {
	  int k = 1;
	  value++;
	  for (int i = 2; i <=value ; i++) {
		  if (value % i == 0) {
			  k++;
      }
    }
	  if (k == 2){
		  return value;
    }
  }
}
uint64_t sumPrime(uint64_t hbound) {
  int sum = 0;
	int k = 0;
	for (int i = 2; i < hbound; i++) {
		for (int j = 2; j <= i / 2; j++) {
			if (i % j == 0) {
				k=k+1;
			}
		}
		if (k == 0) {
			sum = sum + i;
		}
		k = 0;
	}
	return sum;
}
