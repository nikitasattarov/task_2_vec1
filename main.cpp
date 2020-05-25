#include <iostream>
#include <vector>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(0, "Russian");
    cout << "Вводите в строку данные о массиве целых чисел. Последним элементом поставьте '0', в качестве конец массива" << endl;
    cout << "Программа считает, сколько раз меняется знак в массиве." << endl;
    vector<int> m;
    int val;
    cin >> val;
    while (val != 0)
    {

        m.push_back(val);
        cin >> val;
    }
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
