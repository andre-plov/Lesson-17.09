#include <iostream>
#include <string>
using namespace std;


int count(string &name, char &symb) {                                                                                       // кол-во символов функция
    int count = 0;
    for (char &c:name) {
        if (c == symb) {
            count++;
        }
    }
    return count;
}



int main() {
    cout << "Enter your name in format FIO ;): " << endl;
    string name;
    getline(cin, name);
    cout << "Length line " << name.length() << "symbols" << endl;
    if (name.find(' ') == string::npos) {                                                                               // Проверка на неличие побела
        cout << "Space not found" << endl;
    }else{
        int first_space_index = name.find(' ');
        int first_space_real_value = first_space_index + 1;
        string a = name.substr(first_space_index, name.length() - first_space_index).replace(0, 1, "");
        int second_space_real_value = a.find(' ') + first_space_index + 2;
        int second_space_index = a.find(' ');
        cout << "Space is found\n" << "   first_space: " << first_space_real_value << "\n" << "   second_space: " << second_space_real_value << endl;

        string surname = name.substr(0, first_space_index);                                                         // Фамилия
        cout << "Surname: " << surname << endl;

        string name_word = a.substr(0, second_space_index);                                                    // Name
        cout << "Name: " << name_word << endl;

        string Othestvo = a.substr(second_space_index + 1, (a.length() - name_word.length()));
        cout << "Othestvo: " << Othestvo << endl;

        cout << "Your name in file`s mame format: " << surname << "_" << name_word[0] << "." << Othestvo[0] << "." << endl;


    }

    string word;                                                                                                            // блок с функцией count()
    cout << "Enter your word: " << endl;
    cin >> word;
    char symb;
    cout << "Enter your symbol: " << endl;
    cin >> symb;
    cout << "Count entry " << count(word, symb) << endl;

    return 0;


}