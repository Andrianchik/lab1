#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // �������� �������� ���� alpha � �������
    double alpha;
    std::cout << "Enter the value of the alpha angle in radians: ";
    std::cin >> alpha;

    // ������� 1
    double z1 = 2 * pow(sin(3 * M_PI - 2 * alpha), 2) * pow(cos(5 * M_PI + 2 * alpha), 2);

    // ������� 2
    double z2 = 0.25 - 0.25 * sin(2.5 * M_PI - 4 * alpha);

    // ���� ����������
    std::cout << "According to the formula 1 (z1): " << z1 << std::endl;
    std::cout << "According to the formula 2 (z2): " << z2 << std::endl;

    return 0;
}
