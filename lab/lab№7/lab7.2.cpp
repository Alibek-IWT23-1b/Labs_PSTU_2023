#include <iostream>
#include <initializer_list>

int sum(std::initializer_list<int> numbers) {
    int total = 0;
    for (int number : numbers) {
        total += number;
    }
    return total;
}

int main() {
    // Вызов функции sum с 3 параметрами
    int result1 = sum({1, 2, 3});
    std::cout << "Сумма трех чисел: " << result1 << std::endl;

    // Вызов функции sum с 7 параметрами
    int result2 = sum({1, 2, 3, 4, 5, 6, 7});
    std::cout << "Сумма семи чисел: " << result2 << std::endl;

    // Вызов функции sum с 11 параметрами
    int result3 = sum({1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11});
    std::cout << "Сумма одиннадцати чисел: " << result3 << std::endl;

    return 0;
}
