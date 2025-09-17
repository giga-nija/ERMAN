#include <iostream>
#include <stack>  // Подключаем библиотеку для работы со стеком

int main() {
    // Создаем стек для хранения целых чисел
    std::stack<int> stack;
    
    // Добавляем элементы в стек (push)
    stack.push(10);  // Положили 10 на вершину
    stack.push(20);  // Положили 20 на вершину  
    stack.push(30);  // Положили 30 на вершину
    return 0;
}
