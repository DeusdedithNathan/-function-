#include <iostream>
using namespace std;
int f(int n) {
    if (n == 1) return 1;  // Base case: f(1) = 1
    return 2 * f(n - 1);   // Recursive step: f(n) = 2 * f(n-1) for n >= 2