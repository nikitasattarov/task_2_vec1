#include <iostream>
#include <vector>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(0, "Russian");
    cout << "������� � ������ ������ � ������� ����� �����. ��������� ��������� ��������� '0', � �������� ����� �������" << endl;
    cout << "��������� �������, ������� ��� �������� ���� � �������." << endl;
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
    cout << "���������� ���� ����� � �������: ";
    cout << k;
    return 0;
}
