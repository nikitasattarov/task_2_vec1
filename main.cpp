#include <iostream>
#include <vector>
#include <locale.h>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main()
{
    srand ( time(NULL) );
    setlocale(0, "Russian");
    int i, n, random_int;
    cout << "Введите длину строки: " << endl;
    cin >> n;
    cout << "Программа считает, сколько раз меняется знак в массиве." << endl;
    cout << "Строка со случайными значениями: " << endl;
    vector<int> m;
    int val;
    for (i = 0; i < n; i++){
        random_int = rand() % 30 - 15;
        cout << random_int << " ";
        m.push_back(random_int);
    }
    cout << endl;


vector<int>::iterator iter = m.begin();
    int k = 0;
    int a, b;
    while (iter != m.end())
    {
        a = *iter;
        ++iter;
        b = *iter;
        if (a * b < 0) k += 1;
    }
    cout << "Количество смен знака в массиве: ";
    cout << k;
    return 0;
}
