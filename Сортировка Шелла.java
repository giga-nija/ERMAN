class Shell{
    static void s(int[] a){
        for(int gap = a.length / 2; gap > 0; gap /= 2){ // уменьшаем шаг
            for(int i = gap; i < a.length; i++){        // вставка с шагом gap
                int temp = a[i]; int j = i;
                while(j >= gap && a[j - gap] > temp){  // если предыдущий элемент больше temp
                    a[j] = a[j - gap]; j -= gap;       // сдвигаем его вправо
                }
                a[j] = temp;                         // вставляем temp на позицию j
            }
        }
    }
    public static void main(String[] args){ int[] a = {12,34,54,2,3}; s(a); for(int x:a) System.out.print(x+\" \"); }
}
