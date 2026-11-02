#include <iostream>
#include <string>
#include <vector>
#include <chrono>


using namespace std;

struct Student {
    string name;
    int age;
    int group;
    int mark;
};


vector<Student> students;



int main() {
    cout << "[add] for enter student \n[search] for search any student \n[list] for view list of student\n[max] for view a max mark and student who have it" << endl;
    while (true) {
        string command;
        cin >> command;
        if (command == "add") {                                                                                           // Добавление студента
            cout << "Enter name: " << endl;
            string name_;
            getline(cin >> ws, name_);

            cout << "Enter age: " << endl;
            int age_;
            cin >> age_;
            if (age_ <= 0 or age_ >= 120) { // проверка на валидность возраста
                cout << "Invalid age, retry" << endl;
                cin >> age_;
            } if (age_ > 90 and age_ < 120) {
                cout << "Wow, you so old..." << endl;
            }

            cout << "Enter group: " << endl;
            int group_;
            cin >> group_;
            if (group_ <= 0) {                                                                                              // проверка на валидность группы
                cout << "Invalid group, retry" << endl;
                cin >> group_;
            }

            cout << "Enter abs mark: " << endl;
            int mark;
            cin >> mark;
            if (mark <= 0) {
                cout << "Invalid abs mark, retry" << endl;
                cin >> mark;
            }
            students.push_back(Student(name_, age_, group_, mark));

        } else if (command == "search") {                                                                                   // поиск
            string atribute;
            cout << "Enter attribute [name]|[age]|[group]|[abs]" << endl;
            cin >> atribute;
            if (atribute == "name") {
                string value;
                cout << "Enter value" << endl;
                cin >> value;
                bool flag = false;
                for (int i = 0; i < students.size(); i++) {
                    if (students[i].name == value){
                        cout << "----Student " << i + 1 << " ----" << endl;
                        cout  << "Name: "<< students[i].name << endl;
                        cout << "Age: "<< students[i].age << endl;
                        cout << "Group: "<< students[i].group << endl;
                        cout << "Mark: "<< students[i].mark << endl << endl;
                        flag = true;
                    }
                }
                if (flag == false) {
                    cout << "None result" << endl;
                }
            } else if (atribute == "age" or atribute == "group" or atribute == "abs") {
                int value;
                cout << "Enter value" << endl;
                cin >> value;
                bool flag = false;
                for (int i = 0; i < students.size(); i++) {
                    if (students[i].age == value or students[i].group == value or students[i].mark == value) {
                        cout << "----Student " << i + 1 << " ----" << endl;
                        cout  << "Name: "<< students[i].name << endl;
                        cout << "Age: "<< students[i].age << endl;
                        cout << "Group: "<< students[i].group << endl;
                        cout << "Mark: "<< students[i].mark << endl << endl;
                        flag = true;
                    }
                }
                if (flag == false) {
                    cout << "None result" << endl;
                }
            }
        } else if (command == "list") {                                                                                     // посмотреть список студентов
            if (students.size() == 0) {
                cout << "No student found" << endl;
            }
            for (int i = 0; i < students.size(); i++) {
                cout << "----Student " << i + 1 << " ----" << endl;
                cout  << "Name: "<< students[i].name << endl;
                cout << "Age: "<< students[i].age << endl;
                cout << "Group: "<< students[i].group << endl;
                cout << "Mark: "<< students[i].mark << endl << endl;
            }

        }else if (command == "max") {                                                                                       // максимальный средний балл
            if (students.size() == 0) {
                cout << "No student found" << endl;
            }else {
                int mx = 0;
                int mx_index = 0;
                for (int i = 0; i < students.size(); i++) {
                    if (students[i].mark > mx) {
                        mx = students[i].mark;
                        mx_index = i;
                    }
                }
                cout << "----Student " << mx_index + 1 << " ----" << endl;
                cout  << "Name: "<< students[mx_index].name << endl;
                cout << "Age: "<< students[mx_index].age << endl;
                cout << "Group: "<< students[mx_index].group << endl;
                cout << "Mark: "<< students[mx_index].mark << endl << endl;
            }
        } else if (command == "autor") {
            cout << "******   *     *      ***    *   *  ****    ****   *****      ****   *      ***   *       *\n*     *   *   *      *   *   **  *  *   *   *   *  *          *   *  *     *   *   *     *\n******     * *       *****   * * *  *   *   ****   ****       ****   *     *   *    *   *\n*     *     *        *   *   *  **  *   *   * *    *          *      *     *   *     * *\n******      *        *   *   *   *  ****    *  *   *****      *      *****  ***       *\nFollow to my GitHub :)" << endl;
        }else {
            cout << "Invalid command" << endl;
        }

    }
    return 0;
}