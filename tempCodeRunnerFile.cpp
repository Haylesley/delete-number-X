#include <iostream>
#include <vector>

int main() {
    int n;
    std::cout << "Input vector size: ";
    std::cin >> n;

    std::vector<int> numbers;
    std::cout << "Input numbers: ";
    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        numbers.push_back(num);
    }

    int X;
    std::cout << "Input number to delete: ";
    std::cin >> X;

    // Перемещаем все элементы, не равные X, в начало вектора
    int newSize = 0;
    for (int i = 0; i < n; ++i) {
        if (numbers[i] != X) {
            numbers[newSize] = numbers[i];
            ++newSize;
        }
    }

    // Удаляем лишние элементы из конца вектора
    while (numbers.size() > newSize) {
        numbers.pop_back();
    }

    std::cout << "Result: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
