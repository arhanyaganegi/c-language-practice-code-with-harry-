#include <stdio.h>
int main() {
  int n = 4;
  int prime=0;
  for (int i = 2; i < n; i++) {
    if (n % i == 0) {
      prime = 1;
      break;
    }
  }
  if (prime) {
    printf(" notPrime");
  } else {
    printf(" Prime");
  }
  return 0;
}
