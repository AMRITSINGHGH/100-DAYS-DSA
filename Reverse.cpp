#include <iostream>

int fib(int n) {
    // Base Cases: fib(0) = 0, fib(1) = 1
    if (n == 0) return 0;
    if (n == 1) return 1;
    
    // Recursive Case: fib(n) = fib(n-1) + fib(n-2)
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;
    std::cin >> n;
    std::cout << fib(n) << std::endl;
    return 0;
}