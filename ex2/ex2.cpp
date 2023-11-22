#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Номер варіанта
    int i;
    std::cout << "Enter the option number (instead і): ";
    std::cin >> i;

    // Координати вершин трикутника
    double xA = 0, yA = 0;
    double xB = i, yB = i - 1;
    double xC = -i, yC = i + 1;

    // Обчислення сторін трикутника
    double sideAB = sqrt(pow(xB - xA, 2) + pow(yB - yA, 2));
    double sideBC = sqrt(pow(xC - xB, 2) + pow(yC - yB, 2));
    double sideCA = sqrt(pow(xA - xC, 2) + pow(yA - yC, 2));

    // Обчислення півпериметра
    double s = (sideAB + sideBC + sideCA) / 2;

    // Обчислення площі трикутника за формулою Герона
    double area = sqrt(s * (s - sideAB) * (s - sideBC) * (s - sideCA));

    // Обчислення висоти та бісектриси
    double ha = 2 * area / sideAB; // висота з вершини A
    double wc = 2 * sqrt(sideBC * sideCA * s * (s - sideAB)) / (sideBC + sideCA); // бісектриса з вершини A

    // Вивід результатів
    std::cout << "Height from the top A (ha): " << ha << std::endl;
    std::cout << "Bisector from the top A (wc): " << wc << std::endl;

    return 0;
}