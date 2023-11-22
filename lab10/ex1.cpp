#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // ������� ���� ������� ������
    double cost_per_page;
    std::cout << "Enter the cost of one page of text: ";
    std::cin >> cost_per_page;

    // ʳ������ ������������ �������
    int translated_pages;
    std::cout << "Enter the number of translated pages: ";
    std::cin >> translated_pages;

    // ���������� �������� �����
    double total_salary = cost_per_page * translated_pages;

    // ��������� ����������
    std::cout << "Total Translator Salary: " << total_salary << std::endl;

    // ������� 1 � �������
    double cost_per_meter;
    std::cout << "Enter the cost of 1 m of fabric: ";
    std::cin >> cost_per_meter;

    // ������ ����� �������
    double length, width;
    std::cout << "Enter the length of the cut (m): ";
    std::cin >> length;
    std::cout << "Enter the width of the cut (m): ";
    std::cin >> width;

    // ���������� ������� �������
    double total_cost = cost_per_meter * length * width;

    // ��������� ����������
    std::cout << "Total Fabric Cost: " << total_cost << std::endl;

    return 0;
}