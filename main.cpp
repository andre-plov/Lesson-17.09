#include <iostream>
#include <string>
#include <windows.h>

using namespace std;


int password(short int length, string name){
    for(short int i = (length - 1); i >= 0; i--){
        cout << name[i];
    }

    return 0;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string username;
    cout << "Введите имя" << endl;
    cin >> username;
    password(username.length(), username);
    return 0;
}
