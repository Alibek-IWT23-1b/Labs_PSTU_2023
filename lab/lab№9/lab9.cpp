#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream inputFile("F1.txt");  // Открываем файл F1 для чтения
    std::ofstream outputFile("F2.txt");  // Открываем файл F2 для записи

    if (!inputFile.is_open()) {
        std::cerr << "Не удалось открыть файл F1.txt" << std::endl;
        return 1;
    }
    if (!outputFile.is_open()) {
        std::cerr << "Не удалось открыть файл F2.txt" << std::endl;
        return 1;
    }

    std::string line;
    int lineNumber = 0;

    // Чтение строк из F1 и запись четных строк в F2
    while (std::getline(inputFile, line)) {
        lineNumber++;
        if (lineNumber % 2 == 0) {  // Проверка на четность номера строки
            outputFile << line << std::endl;  // Запись четной строки в F2
        }
    }

    // Закрываем файлы
    inputFile.close();
    outputFile.close();

    // Подсчет размеров файлов
    inputFile.open("F1.txt", std::ios::ate); // Открываем F1 для получения размера
    outputFile.open("F2.txt", std::ios::ate); // Открываем F2 для получения размера

    if (inputFile.is_open()) {
        std::streamsize sizeF1 = inputFile.tellg(); // Получаем размер F1
        std::cout << "Размер файла F1: " << sizeF1 << " байт" << std::endl;
        inputFile.close();
    }

    if (outputFile.is_open()) {
        std::streamsize sizeF2 = outputFile.tellg(); // Получаем размер F2
        std::cout << "Размер файла F2: " << sizeF2 << " байт" << std::endl;
        outputFile.close();
    }

    return 0;
}
