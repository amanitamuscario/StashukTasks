#include <iostream>
#include <cstdlib>
#include <Windows.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double num;

    cout << "������� �����: ";
    cin >> num;

    if (num > 7) {
        cout << "������\n";
    }
    system("pause");
    return 0;
}