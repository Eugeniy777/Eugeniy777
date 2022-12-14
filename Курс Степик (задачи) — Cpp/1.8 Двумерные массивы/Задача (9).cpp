#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    // sozdanie i initializaciya massiva
    int arr[n][m], a[m][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
            a[j][i] = arr[i][j];
        }
    }   
    // vyvod vtorogo massiva
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
  return 0;
}




/*
Дан двумерный массив размером n×m (n и m не превосходят 1000). Симметричный ему относительно главной диагонали массив называется транспонированным к данному. Он имеет размеры m×n: строки исходного массива становятся столбцами транспонированного, столбцы исходного массива становятся строками транспонированного.

Для данного массива постройте транспонированный массив и выведите его на экран. 
*/