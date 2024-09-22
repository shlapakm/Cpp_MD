#include <iostream>
#include <cmath>
#include <numbers>
#include <iomanip>
#define MAX_ITER 1000000000

double exp(double epsilon, double x) {
    double nextElement = 1.0;
    double result = nextElement; 
    for (unsigned long long i = 1; ((i < MAX_ITER) && (nextElement > epsilon)); i++) {
        nextElement *= x / i;
        result += nextElement;
    }
    return result;
}

int main() {
    double epsilon;
    double x = 1.0;
    std::cout << "epsilon = ";
    std::cin >> epsilon;
  
    double result = exp(epsilon, x);
    std::cout << std::setprecision(16) << "with Taylor: " << result << std::endl;
    std::cout << "basic value " << std::numbers::e << std::endl;
 
    return 0;
}