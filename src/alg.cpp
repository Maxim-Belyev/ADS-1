// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"
bool checkPrime(uint64_t value) {
    if (value < 2) {
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
    uint64_t Num = 2;
    uint64_t k = 0;
    while (1) {
        if (checkPrime(Num) == 1) {
            k++;
        }
        if (k == n) {
            break;
        }
        Num++;
    }
    return Num;
}
uint64_t nextPrime(uint64_t value) {
    while (1) {
        uint64_t k = 1;
        value++;
        for (uint64_t i = 2; i <=value ; i++) {
            if (value % i == 0) {
                k++;
            }
        }
        if (k == 2) {
            return value;
        }
    }
}
uint64_t sumPrime(uint64_t hbound) {
    uint64_t sum = 0;
    uint64_t k = 0;
    for (uint64_t i = 2; i < hbound; i++) {
        for (uint64_t j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                k = k+1;
            }
        }
        if (k == 0) {
            sum = sum + i;
        }
        k = 0;
    }
    return sum;
}
