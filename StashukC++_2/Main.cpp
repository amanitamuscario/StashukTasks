#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    setlocale(0, "");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char name[50];
    cout << "������� ���:\n";
    cin >> name;
    if (strcmp(name, "��������") == 0) {
        cout << "������,��������\n";
    }
    else {
        cout << "��� ������ �����\n";
    }
    system("pause");
    return 0;
}