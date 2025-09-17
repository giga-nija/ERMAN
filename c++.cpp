#include <iostream>
#include <vector>   // Для динамического массива (vector)
#include <list>     // Для двусвязного списка

int main() {
    // Создание vector (динамический массив)
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    
    // Добавление элементов в конец vector
    numbers.push_back(6);  
    numbers.push_back(7);
    
    // Вставка элемента в середину vector
    numbers.insert(numbers.begin() + 2, 99);  
    
    // Создание list (двусвязный список)
    std::list<std::string> names = {"Alice", "Bob", "Charlie"};
    
    // Вставка элемента в середину list
    auto it = names.begin();
    std::advance(it, 1);  // Перемещаем итератор на вторую позицию
    names.insert(it, "David");
    
    // Вывод элементов vector
    std::cout << "Vector elements: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    // Вывод элементов list
    std::cout << "List elements: ";
    for (const auto& name : names) {
        std::cout << name << " ";
    }
    std::cout << std::endl;
    
    return 0;
} 
