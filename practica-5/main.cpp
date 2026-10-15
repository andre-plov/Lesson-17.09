#include <iostream>
#include <string>

using namespace std;

void assign (int *p, int x){
        *p = x;
}


int main(){
int y = 0;

    assign(&y, 5);

    cout << "corrct function main: ";
    if(y != 5){
        cout << "ERROR";

    } else {
        cout << "OK";
    }

    return 0;
}
