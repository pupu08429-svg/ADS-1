// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  if (value < 2) {
    return false;
  }
  for (uint64_t i = 2; i * i <= value; i++) {
    if (value % i == 0) {
      return false;
    }
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
  if (n == 0) {
    return 0;
    }
  uint64_t por = 1;
  uint64_t chislo = 1;
  while (por <= n) {
    chislo++;
      if (checkPrime(chislo) == true) {
        por++;
      }
    }
    return chislo;
}

uint64_t nextPrime(uint64_t value) {
  uint64_t chislo = value+1;
  while (checkPrime(chislo) != true) {
    chislo++;
  }
  return chislo;
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t sum = 0;
  for (uint64_t i = 0; i < hbound; i++) {
    if (checkPrime(i)) {
      sum += i;
    }
  }
  return sum;
}

uint64_t twinPrimes(uint64_t lbound, uint64_t hbound) {
  uint64_t kolvo = 0;
  uint64_t chislo = lbound;
  while ((chislo != hbound) && (chislo+2 != hbound)) {
    if (checkPrime(chislo) == true) {
      if (checkPrime(chislo + 2) == true) {
        kolvo += 1;
        }
      }
    chislo++;
  }
  return kolvo;
}
