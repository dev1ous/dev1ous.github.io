#include "cours_test.h"

// vous etes beaux
int factorial(int n) {
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}
