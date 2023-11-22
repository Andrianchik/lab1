#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Введення значення x
    double x;
    std::cout << "Enter the value of x: ";
    std::cin >> x;

    // Константа b
    const double b = 7;

    // Обчислення a, c та y
    double a = pow(b + x, 2);
    double c = log(fabs(b));
    double y = pow(c, 2) + sqrt(fabs(a));

    // Виведення результату
    std::cout << "Function value y = F(x): " << y << std::endl;

    return 0;
}