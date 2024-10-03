#include <iostream>
#include <vector>

class ArrayManager {
private:
    std::vector<int> arr;

public:
    // Функция для добавления элемента в массив
    void addElement(int value, int index) {
        if (index < 0 || index > arr.size()) {
            std::cout << "Некорректный индекс." << std::endl;
            return;
        }
        arr.insert(arr.begin() + index, value);
        printArray();
    }

    // Функция для удаления элемента по индексу
    void removeElement(int index) {
        if (index < 0 || index >= arr.size()) {
            std::cout << "Некорректный индекс." << std::endl;
            return;
        }
        arr.erase(arr.begin() + index);
        printArray();
    }

    // Функция для печати массива
    void printArray() {
        if (arr.empty()) {
            std::cout << "Массив пустой." << std::endl;
            return;
        }
        for (int i : arr) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    ArrayManager manager;

    // Пример заполнения массива
    manager.addElement(10, 0); // Добавление 10 на индекс 0
    manager.addElement(20, 1); // Добавление 20 на индекс 1
    manager.addElement(30, 2); // Добавление 30 на индекс 2

    // Удаление элемента по индексу
    manager.removeElement(1); // Удаление элемента с индексом 1 (20)

    // Добавление нового элемента
    manager.addElement(25, 1); // Добавление 25 на индекс 1

    return 0;
}
