#include <iostream>
#include <string>
#include <windows.h>
#include <stdlib.h>
#include <ctime>

using namespace std;




string number(){
    int num = rand() % 10;
    return to_string(num);
}


char char_(){
    int index_char = rand() % 90;
    int index_win1251 = abs(index_char - 65);
    char a = index_win1251;
    return a;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(0));
    int lenght_password;
    string password;
    cout << "¬ведите длину парол€:" << endl;
    cin >> lenght_password;
    for(int i = lenght_password; i >= 1; i--){
        int rand_num = rand() % 2;
        if (rand_num == 1){
            password += number();
        } else {
            password += to_string(char_());
        }
    cout << password;
    }
    return 0;
}
