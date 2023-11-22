#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // ����� �������
    int i;
    std::cout << "Enter the option number (instead �): ";
    std::cin >> i;

    // ���������� ������ ����������
    double xA = 0, yA = 0;
    double xB = i, yB = i - 1;
    double xC = -i, yC = i + 1;

    // ���������� ����� ����������
    double sideAB = sqrt(pow(xB - xA, 2) + pow(yB - yA, 2));
    double sideBC = sqrt(pow(xC - xB, 2) + pow(yC - yB, 2));
    double sideCA = sqrt(pow(xA - xC, 2) + pow(yA - yC, 2));

    // ���������� �����������
    double s = (sideAB + sideBC + sideCA) / 2;

    // ���������� ����� ���������� �� �������� ������
    double area = sqrt(s * (s - sideAB) * (s - sideBC) * (s - sideCA));

    // ���������� ������ �� ���������
    double ha = 2 * area / sideAB; // ������ � ������� A
    double wc = 2 * sqrt(sideBC * sideCA * s * (s - sideAB)) / (sideBC + sideCA); // ��������� � ������� A

    // ���� ����������
    std::cout << "Height from the top A (ha): " << ha << std::endl;
    std::cout << "Bisector from the top A (wc): " << wc << std::endl;

    return 0;
}