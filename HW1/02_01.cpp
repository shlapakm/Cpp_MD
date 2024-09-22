// symbol classification
#include <iostream>


int main() {
    char n = '0';
    std::cout << "symbol = ";
    std::cin >> n;
    switch(n) {
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
            std::cout << "this is a decimal digit!" << std::endl;
            break;
        case '+':
        case '-':
        case '*':
        case ':':
            std::cout << "this is arithmetic operator!" << std::endl;
            break;
        case '(':
        case ')':
            std::cout << "this is bracket!" << std::endl;
            break;
        default:
            std::cout << "this is another symbol!" << std::endl;
    }
}