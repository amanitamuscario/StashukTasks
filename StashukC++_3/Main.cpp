#include <iostream>
#include <cstdlib>
#include <Windows.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int size = 5;
    int a[size];

    cout << "������� �������� �������������� �������:\n";
    for (int i = 0; i < size; i++)
        cin >> a[i];

    cout << "��������,������� 3: \n";
    for (int i = 0; i < size; i++) {
        if (a[i] % 3 == 0)
        {
            cout << a[i] << " ";
        }
    }
    system("pause");
    return 0;
}
