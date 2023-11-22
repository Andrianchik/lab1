#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Вартість однієї сторінки тексту
    double cost_per_page;
    std::cout << "Enter the cost of one page of text: ";
    std::cin >> cost_per_page;

    // Кількість перекладених сторінок
    int translated_pages;
    std::cout << "Enter the number of translated pages: ";
    std::cin >> translated_pages;

    // Розрахунок заробітної плати
    double total_salary = cost_per_page * translated_pages;

    // Виведення результату
    std::cout << "Total Translator Salary: " << total_salary << std::endl;

    // Вартість 1 м тканини
    double cost_per_meter;
    std::cout << "Enter the cost of 1 m of fabric: ";
    std::cin >> cost_per_meter;

    // Розміри відрізу тканини
    double length, width;
    std::cout << "Enter the length of the cut (m): ";
    std::cin >> length;
    std::cout << "Enter the width of the cut (m): ";
    std::cin >> width;

    // Розрахунок вартості тканини
    double total_cost = cost_per_meter * length * width;

    // Виведення результату
    std::cout << "Total Fabric Cost: " << total_cost << std::endl;

    return 0;
}