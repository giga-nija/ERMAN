# Жадный алгоритм для MAX CUT
# Ввод рёбер графа происходит с клавиатуры

def read_graph():
    n = int(input("Введите число вершин графа: "))
    m = int(input("Введите количество рёбер: "))
    edges = []

    print("Введите рёбра в формате 'u v' (нумерация с 0):")
    for _ in range(m):
        u, v = map(int, input().split())
        edges.append((u, v))

    return n, edges


def greedy_max_cut(n, edges):
    # Изначально каждая вершина не назначена ни в одну группу
    group = [-1] * n

    # Добавляем вершины по одной в ту группу, где они дают больший вклад в разрез
    for v in range(n):
        cut_if_0 = 0
        cut_if_1 = 0

        # Проверяем все рёбра, чтобы понять вклад вершины
        for u, w in edges:
            if v == u and group[w] != -1:
                if group[w] == 1:
                    cut_if_0 += 1
                if group[w] == 0:
                    cut_if_1 += 1
            if v == w and group[u] != -1:
                if group[u] == 1:
                    cut_if_0 += 1
                if group[u] == 0:
                    cut_if_1 += 1

        # Жадный выбор
        group[v] = 0 if cut_if_0 >= cut_if_1 else 1

    # Подсчёт рёбер в разрезе
    cut_edges = sum(1 for u, w in edges if group[u] != group[w])

    group0 = [i for i in range(n) if group[i] == 0]
    group1 = [i for i in range(n) if group[i] == 1]

    return group0, group1, cut_edges


# ===== Основная часть =====
n, edges = read_graph()
groupA, groupB, cut_value = greedy_max_cut(n, edges)

print("Группа A:", groupA)
print("Группа B:", groupB)
print("Число рёбер в разрезе:", cut_value)
