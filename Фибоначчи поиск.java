class FibSearch{
    static int fs(int[] a, int x){
        int n = a.length;
        int fibMMm2 = 0, fibMMm1 = 1; int fibM = fibMMm2 + fibMMm1; // первые числа Фибоначчи
        while(fibM < n){ fibMMm2 = fibMMm1; fibMMm1 = fibM; fibM = fibMMm2 + fibMMm1; } // fibM >= n
        int offset = -1;
        while(fibM > 1){
            int i = Math.min(offset + fibMMm2, n - 1); // вычисляем индекс для сравнения
            if(a[i] < x){
                fibM = fibMMm1; fibMMm1 = fibMMm2; fibMMm2 = fibM - fibMMm1; offset = i; // сдвиг вправо
            } else if(a[i] > x){
                fibM = fibMMm2; fibMMm1 = fibMMm1 - fibMMm2; fibMMm2 = fibM - fibMMm1; // сдвиг влево
            } else return i; // найден
        }
        if(fibMMm1 == 1 && offset + 1 < n && a[offset + 1] == x) return offset + 1; // финальная проверка
        return -1;
    }
    public static void main(String[] args){ int[] a = {1,3,7,15,20,40}; System.out.print(fs(a,15)); }
}
