#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    setlocale(0, "");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char name[50];
    cout << "¬ведите им€:\n";
    cin >> name;
    if (strcmp(name, "¬€чеслав") == 0) {
        cout << "ѕривет,¬€чеслав\n";
    }
    else {
        cout << "Ќет такого имени\n";
    }
    system("pause");
    return 0;
}