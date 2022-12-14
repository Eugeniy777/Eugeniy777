#include <iostream>
using namespace std;

int main() {
    int i = 0, vh = 1, prev = 0, post = 0, now = 0;
        while (vh) {
            cin >> vh;
            if (!vh) {
                break;
            }
            prev = vh;
            cin >> vh;
            if (!vh) {
                break;
            }
            now = vh;
            cin >> vh;
            if (!vh) {
                break;
            }
            post = vh;
            if (now > prev && now > post) {
                i++;
            }
            while (post) {
                if (!post) {
                    cout << i;
                    return 0;
                }
                prev = now;
                now = post;
                cin >> post;
            if (!post) {
                    cout << i;
                    return 0;
                }
            if (now > prev && now > post) {
                i++;
            }
            }
        }
            cout << i;
  return 0;
}




/*
Элемент последовательности называется локальным максимумом, если он строго больше предыдущего и последующего элемента последовательности. Первый и последний элемент последовательности не являются локальными максимумами.

Дана последовательность натуральных чисел, завершающаяся числом 0. Определите количество строгих локальных максимумов в этой последовательности.
Формат входных данных:
Вводится последовательность натуральных чисел, оканчивающаяся числом 0 (само число 0 в последовательность не входит, а служит как признак ее окончания).

Формат выходных данных:
Выведите ответ на задачу.
*/