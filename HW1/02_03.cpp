// An algorithm for factorization
#include <iostream>
#include <vector>
#include <iterator>
#include <cmath>
std::vector<unsigned long long> factorization(unsigned long long n) {
    std::vector<unsigned long long> factors;
    /* odd prime*/
    while (n % 2 == 0) {
        factors.push_back(2);
        n = n/2;
    }
    for (unsigned long long i = 3; i <= std::sqrt(n); i+=2) {
        while (n%i == 0) {
            factors.push_back(i);
            n = n/i;
        }
    }
    if (n > 2) {
        factors.push_back(n);
    }
    return factors;
}

int main() {
    unsigned long long n = 0;
    std::cout << "n = ";
    std::cin >> n;

    auto factors = factorization(n);
    std::copy(std::begin(factors), std::end(factors), std::ostream_iterator<unsigned long long>(std::cout, "; "));
    std::cout << std::endl;
}