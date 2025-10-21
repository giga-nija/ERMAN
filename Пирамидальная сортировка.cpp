#include <bits/stdc++.h>
using namespace std;
void heap_sort(vector<int>& a){
    // реализация через std::priority_queue для простоты (не in-place)
    priority_queue<int, vector<int>, greater<int>> pq(a.begin(), a.end()); // min-heap из элементов
    for(int i = 0; i < a.size(); i++){  // выдаём элементы в порядке возрастания
        a[i] = pq.top(); pq.pop();
    }
}
