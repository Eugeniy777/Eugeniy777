#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    if (y >= x)
    {
        for (; y >= x; x++)
        {
            cout << x << endl;
        }
    }
    else if (x > y)
    {
        for (; x >= y; x--)
        {
            cout << x << endl;
        }
    }
    return 0;
}




/*
Выведите все числа между заданными двумя включительно. Первое число может быть больше второго. В таком случае выводить числа нужно в обратном порядке.

Пример 1
Формат входных данных:

-1 2 

Формат выходных данных:

-1
0
1
2 

Пример 2
Формат входных данных:

2 -1 

Формат выходных данных:

2
1
0
-1

*/