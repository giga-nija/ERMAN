#include <bits/stdc++.h>
using namespace std;
int interp(vector<int>& a, int x){
    int lo = 0, hi = a.size() - 1;       // границы
    while(lo <= hi && a[lo] <= x && x <= a[hi]){
        int pos = lo + (hi - lo) * (x - a[lo]) / (a[hi] - a[lo]); // позиция по интерполяции
        if(a[pos] == x) return pos;      // найден
        if(a[pos] < x) lo = pos + 1;     // сдвигаем нижнюю границу
        else hi = pos - 1;               // сдвигаем верхнюю границу
    }
    return -1;
}
int main(){ vector<int> a = {10,20,30,40,50}; cout << interp(a,30); }
