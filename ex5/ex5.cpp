#include <iostream>
#include <math.h>

int main() {
    double x, y;
    std::cout << "Enter the value of x: ";
    std::cin >> x;
    std::cout << "Enter the value of y: ";
    std::cin >> y;
    double result = (sqrt(x + 2) / (3 * y + 1)) + ((8 * pow(x, 2) + 3 * x + 0.5) / (1 - 9 * pow(y, 2) * (x + 0.5) / (9 * y + 3)));
    std::cout << "Result: " << result << std::endl;
    return 0;
}