import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;

public class ListExamples {
    public static void main(String[] args) {
        // Создание ArrayList (динамический массив)
        List<Integer> arrayList = new ArrayList<>();
        
        // Добавление элементов 
        arrayList.add(10);  // Быстрое добавление в конец
        arrayList.add(20);
        arrayList.add(30);
        arrayList.add(1, 15);  // Медленная вставка в середину
        
        // Создание LinkedList (двусвязный список)
        List<String> linkedList = new LinkedList<>();
        
        // Добавление элементов в LinkedList
        linkedList.add("Apple");
        linkedList.add("Banana");
        linkedList.add(1, "Orange");  // Быстрая вставка в середину 
        
        // Вывод элементов ArrayList
        System.out.print("ArrayList elements: ");
        for (Integer num : arrayList) {
            System.out.print(num + " ");
        }
        System.out.println();
        
        // Вывод элементов LinkedList
        System.out.print("LinkedList elements: ");
        for (String fruit : linkedList) {
            System.out.print(fruit + " ");
        }
        System.out.println();
        
        // Демонстрация типобезопасности
        // arrayList.add("String"); // Ошибка компиляции
        
        // Автоматическое управление памятью - не нужно явно удалять элементы
        arrayList.remove(0);  // Элемент будет автоматически удален сборщиком мусора
    }
}
