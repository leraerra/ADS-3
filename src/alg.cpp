// Copyright 2025 NNTU-CS
#include <cstdint>
#include "alg.h"
uint64_t collatzMaxValue(uint64_t num) {
  uint64_t maxVal = num;
  uint64_t n = num;
  while (n != 1) {
    if (n % 2 == 0) {
      n = n / 2;
    } else {
      n = 3 * n + 1;
    }
    if (n > maxVal) {
      maxVal = n;
    }
  }
  return maxVal;
}
unsigned int collatzLen(uint64_t num) {
  unsigned int len = 1;
  uint64_t n = num;
  while (n != 1) {
    if (n % 2 == 0) {
      n = n / 2;
    } else {
      n = 3 * n + 1;
    }
    len++;
  }
  return len;
}
unsigned int seqCollatz(unsigned int *maxlen,
                        uint64_t lbound,
                        uint64_t rbound){
  unsigned int bestNum = lbound;
  unsigned int bestLen = 0;
  for (uint64_t num = lbound; num <= rbound; num++) {
    unsigned int len = collatzLen(num);
    if (len > bestLen) {
      bestLen = len;
      bestNum = num;
    }
  }
  *maxlen = bestLen;
  return bestNum;
}
  *maxlen = bestLen;
  return bestNum;
}
