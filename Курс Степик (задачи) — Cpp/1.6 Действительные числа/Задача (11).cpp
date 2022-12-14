#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    b /= 2 * a;
    c = b * b - c / a;
    if (c == 0) {
        cout << -b;
    } else if (c > 0) {
        cout << -b - sqrt(c) << " " << -b + sqrt(c);
    }
}




/*
Даны действительные коэффициенты a, b, c, при этом a ≠ 0 . Решите квадратное уравнение ax2 + bx + c = 0 и выведите все его корни.

Формат входных данных:
Вводятся три действительных числа.

Формат выходных данных:
Если уравнение имеет два корня, выведите два корня в порядке возрастания, если один корень — выведите одно число, если нет корней — не выводите ничего.
*/