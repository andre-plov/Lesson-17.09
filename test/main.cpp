#include <iostream>
#include "header.h"

using namespace std;

int main()
{
    int num1, num2;

    cout << "Enter numbers (2)" << endl;
    cin >> num1>>num2;
int res = add(num1, num2);
    cout << "result:" << res << endl;
    return 0;
}
