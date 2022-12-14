#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> words;
    string stroka;
    getline(cin, stroka);
    string word;
    for (int i = 0; i <= stroka.size(); ++i)
    {
        if ((stroka[i] != ' ') && (stroka[i] != '\0'))
        {
            word += stroka[i];
        }
        else if (((stroka[i] == ' ') || (stroka[i] == '\0')) && (stroka[i - 1] != ' '))
        {
            if (word == ""s)
            {
                continue;
            }
            words.push_back(word);
            word = ""s;
        }
    }
    for (auto vec : words)
    {
        cout << '[' << vec << ']' << endl;
    }
    return 0;
}




/*
Задание 2
Разбиение на слова работает только в жёстких условиях: нет нескольких пробелов подряд, нет пробелов в начале и конце. Исправьте программу, чтобы она разбивала на слова любые строки, даже не удовлетворяющие этим ограничениям.

Ограничения:
К этой задаче применимы ограничения предыдущей: переменная, в которую сохраняются слова запроса, должна называться words и иметь тип vector<string>. Слова в ней должны идти в таком же порядке, как и в исходной строке.

Формат ввода:
На вход подаётся строка, в которой все слова разделены одним или несколькими пробелами. В начале и в конце строки могут быть пробелы. Возможна пустая строка или строка, состоящая полностью из пробелов.

Формат вывода:
На каждой строчке выведите слово в квадратных скобках. Выводите слова в том порядке, в котором они поступали на вход. 

Пример ввода:

        find   me    a cat    

Пример вывода

[find]
[me]
[a]
[cat] 
*/




/*
Решение от авторов:

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    /* объявляем переменную для хранения строки вводимой пользователем */
    string query;
    /* считываем строку целиком */
    getline(cin, query);

    /*  объявляем вектор строк для хранения слов */
    vector<string> words;
    /* объявляем строку для хранения слова */
    string word;
    /* начинаем цикл от 0 до размера строки (проходим посимвольно по всей строке) */
    for (char c : query) {
        /* условие на выполнение блока:
         * символ это пробел */
        if (c == ' ') {
            if (!word.empty()) {
                /* добавляем слово в конец вектора слов */
                words.push_back(word);
                /* присваиваем переменной пустую строку, т.е. начинаем новое слово */
                word = ""s;
            }
        /* условие на выполнение блока (когда все условия выше - не верны):
         * символ это не пробел (обратное условие) */
        } else {
            /* добавляем символ к строке.
             * Этим блоком мы собираем слово в переменной word */
            word += c;
        }
    }
    if (!word.empty()) {
        /* добавляем последнее слово word в конец вектора words */
        words.push_back(word);
    }

    /* проходим по всем словам из вектора слов */
    for (string word : words) {
        /* выводим слово между [ и ] */
        cout << '[' << word << ']' << endl;
    }
}
*/