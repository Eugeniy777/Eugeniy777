#include <iostream>
#include <string>

using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    if(x + y != z){
        cout << "Error. The sum of "s << x << " and "s << y << " is "s << x + y << endl;
        }
    return 0;
}




/*
Напишите программу, которая проверяет умение пользователя складывать целые числа. На её вход подаются три целых числа: два слагаемых и сумма. Если сумма, введённая пользователем, неверная, выведите строку “Error. The sum of X and Y is Z” — «Ошибка, сумма X и Y равна Z». Вместо X, Y и Z должны быть выведены слагаемые и их сумма. В противном случае не выводите ничего.

Формат входных и выходных данных:
Со стандартного входа программе поступают три целых числа в диапазоне от -1'000'000 до +1'000'000, между которыми находится по одному пробелу. Выводимая строка должна заканчиваться символом конца строки.

Примеры входных и выходных данных
Ввод:			Вывод:
 1   2  3	
 5   3 10		Error. The sum of 5 and 3 is 8
-5   2 -3	
 8 -10  2		Error. The sum of 8 and -10 is -2
*/