#include <windows.h>
#include <iostream>
#include <string>

using namespace std;

string compress(const string& str)
{
    string word;
    bool check = true;
    bool check2 = true;

    for (char symb : str)
    {
        if (check2) {
            if (symb != ' ')
            {
                check2 = false;
            }
            else
            {
                word += ' ';
                continue;
            }
        }
        if (symb == ' ')
        {
            if (!check)
            {
                word += ' ';
                check = true;
            }
        }
        else
        {
            word += symb;
            check = false;
        }
    }
    return word;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string str = "";
    cout << "Программа для сжатия строк\n";
    while (str != "0")
    {
        cout << "Введите строку для сжатия(или 0 для выхода)\n";
        getline(cin, str);
        if (str != "0") cout << "\nСжатая строка:" << compress(str) << endl;
    }

}