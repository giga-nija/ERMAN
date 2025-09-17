def main():
    # Создание списка
    # Python list может содержать элементы разных типов
    mixed_list = [1, "hello", 3.14, True]  # Разные типы данных в одном списке
    
    # Добавление элементов
    mixed_list.append("new element")  # Быстрое добавление в конец
    mixed_list.insert(2, "inserted")  # Медленная вставка в середину 
    
    # Создание списка чисел
    numbers = [10, 20, 30, 40, 50]
    
    # Динамическое изменение размера
    print(f"Original size: {len(numbers)}")
    numbers.extend([60, 70, 80])  # Автоматическое расширение
    print(f"After extend: {len(numbers)}")
    
    # Удаление элементов - автоматическое управление памятью
    removed = numbers.pop(1)  # Удаление по индексу
    numbers.remove(30)        # Удаление по значению
    
    # Срезы - мощная особенность Python
    sublist = numbers[1:4]    # Получение подсписка с 1 по 3 индекс
    
    # Вывод результатов
    print("Mixed list:", mixed_list)
    print("Numbers list:", numbers)
    print("Sublist:", sublist)
    print("Element types in mixed list:", [type(x).__name__ for x in mixed_list])
    
    # Демонстрация универсальности
    # Один список для разных задач
    nested_list = [[1, 2], [3, 4, 5], "string"]  # Список может содержать другие списки

if name == "__main__":
    main()
