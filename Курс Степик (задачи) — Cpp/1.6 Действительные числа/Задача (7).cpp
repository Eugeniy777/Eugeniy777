#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double p, x, y;
    int k;
    cin >> p >> x >> y >> k;
    
    double sum = (x * 100 + y);
    
    while (k--)
        sum = int(sum + (sum * p) / 100);
    
    cout << int(sum / 100) << " " << sum - int(sum/100)*100;
}




/*
 Процентная ставка по вкладу составляет P процентов годовых, которые прибавляются к сумме вклада через год. Вклад составляет X рублей Y копеек. Определите размер вклада через K лет.
Формат входных данных:
Программа получает на вход целые числа P, X, Y, K .

Формат выходных данных:
Программа должна вывести два числа: величину вклада через K лет в рублях и копейках. Дробное число копеек по истечение года отбрасывается. Перерасчет суммы вклада (с отбрасыванием дробных частей копеек) происходит ежегодно.
Примечание
В этой задаче часто возникают проблемы с точностью. Если они возникли у вас - попробуйте решить задачу в целых числах.
*/