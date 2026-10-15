#include <iostream>
#include <string>

using namespace std;

void assign (int *p, int x){
        *p = x;
}

void convert(int time, int *minut, int *second){
    *minut = time / 60;
    *second = time % 60;
}

int main(){
    int y = 0;
    int time;
    cout << "Enter time: ";
    cin >> time;

    int minutes = 0, seconds = 0;
    convert(time, &minutes, &seconds);
    cout << "corrct function main: ";
    if(y != 5 || seconds != 40){
        cout << "ERROR " << minutes << "m "<< seconds << "s";

    } else {
        cout << "OK";
    }

    return 0;
}
