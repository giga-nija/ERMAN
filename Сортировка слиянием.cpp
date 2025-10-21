#include <bits/stdc++.h>
using namespace std;
vector<int> merge_sort(vector<int> a){
    if(a.size() <= 1) return a;         // базовый случай: массив уже отсортирован
    int m = a.size() / 2;               // делим на две части
    vector<int> L(a.begin(), a.begin() + m), R(a.begin() + m, a.end()); // копируем части
    L = merge_sort(L); R = merge_sort(R); // рекурсивно сортируем части
    vector<int> res; int i = 0, j = 0;  // результат и указатели
    while(i < L.size() && j < R.size()) // слияние двух отсортированных массивов
        (L[i] <= R[j]) ? res.push_back(L[i++]) : res.push_back(R[j++]);
    res.insert(res.end(), L.begin() + i, L.end()); // добавляем остатки L
    res.insert(res.end(), R.begin() + j, R.end()); // добавляем остатки R
    return res;
}
int main(){ vector<int> a = {38,27,43,3,9,82,10}; auto r = merge_sort(a); for(int x:r) cout<<x<<' '; }
