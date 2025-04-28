#include <iostream>
using namespace std;
// Recursive function for f(n)
int f(int n) {
    if (n == 1) return 1;  // Base case: f(1) = 1
    return 2 * f(n - 1);   // Recursive step: f(n) = 2 * f(n-1) for n >= 2
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
 if (num < 1) {
        cout << "Please enter a valid number (n >= 1)." << endl;
    } else {
        cout << "f(" << num << ") = " << f(num) << endl;
    }