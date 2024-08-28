// biblioteca.cpp
#include "biblioteca.h"

int absoluto(int val) {
  if (val > 0)
    return val;
  else if (val < 0)
    return -val;
  else
    return 0;
}

int vezes_dois(int val) {
  if (val != 0)
    return val * 2;
  else
    return 0;
}