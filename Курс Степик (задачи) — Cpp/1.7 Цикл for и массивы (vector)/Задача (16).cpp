#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, k, x, y, i, j;
    cin >> N >> k;
    vector <int> a(N);
    for (i = 0; i < N; i++) {
        a[i]=1; // kegli = 1
    }
    for (i = 0; i < k; i++) {
        cin >> x >> y;
        for (j = x-1; j < y; j++) {
            a[j] = 0; // sbitye kegli = 0
        }
    }
    for (i = 0; i < N; i++) {
        if (a[i]) {
            cout << "I"; // esli 1(true) - to "I", esli 0(false) - to "."
        }
        else {
            cout << ".";
        }
    }
    return 0;
}




/*
N кеглей выставили в один ряд, занумеровав их слева направо числами от 1 до N. Затем по этому ряду бросили K шаров, при этом i-й шар сбил все кегли с номерами от li до ri включительно. Определите, какие кегли остались стоять на месте.

Формат входных данных

Программа получает на вход количество кеглей N и количество бросков K. Далее идет K пар чисел li, ri, при этом 1 ≤ li, ri ≤ N.
Формат выходных данных
Программа должна вывести последовательность из N символов, где j-й символ есть “I”, если j-я кегля осталась стоять, или “.”, если j-я кегля была сбита.
*/