#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // �������� �������� x
    double x;
    std::cout << "Enter the value of x: ";
    std::cin >> x;

    // ��������� b
    const double b = 7;

    // ���������� a, c �� y
    double a = pow(b + x, 2);
    double c = log(fabs(b));
    double y = pow(c, 2) + sqrt(fabs(a));

    // ��������� ����������
    std::cout << "Function value y = F(x): " << y << std::endl;

    return 0;
}