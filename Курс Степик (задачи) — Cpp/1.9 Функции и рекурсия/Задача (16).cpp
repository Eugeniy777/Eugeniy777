#include <iostream>
using namespace std;

    int n , cnt = 0;
    int X[11], Y[11];
    bool check(int x, int y) {
        for (int i = 1; i <= n; i++) {
            if (X[i] != 0) {
                if ((X[i] == x) || (Y[i] == y) || (X[i] + Y[i] == x + y) || (X[i] + y == x + Y[i])) {
                    return false;
                }
            }
        }
	return true;
    }

    void queen(int step) {
        if (step == n + 1) {
            cnt++;
            return;
	}
        for (int i = 1; i <= n; i++) {
            if (check(step, i)) {
                X[step] = step; 
                Y[step] = i;
                queen(step + 1);
            }		
            X[step] = 0; 
            Y[step] = 0;
        }
    }

int main() {
    cin >> n;
    queen(1);

    cout << cnt;
    return 0;
}




/*
Дано число N. Определите, сколькими способами можно расставить на доске N×N N ферзей, не бьющих друг друга.
Формат входных данных

Задано единственное число N. (N ≤ 10)
Формат выходных данных
Выведите ответ на задачу.
Подсказка
Напишите рекурсивную функцию, которая пытается поставить ферзя в очередной столбец. Если на эту клетку ставить ферзя нельзя (он бьет предыдущих), то такой вариант даже не стоит рассматривать. Когда вы успешно поставили ферзя в последний столбец - увеличивайте счетчик.
*/