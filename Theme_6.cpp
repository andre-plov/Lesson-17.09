#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;


void BubbleSort(std::vector<int>& arr){
    for (int i = arr.size(); i != 0; --i){

        for (int j = 0; j < (i - 1); ++j){
                if (arr[j] > arr[j + 1]){
                    swap(arr[j], arr[j + 1]);
                }

        }
    }
    // Вывод массива
    for (int val : arr) {
            cout << val << " ";
        }
        cout << endl;
}


int main(){
    int size;
    vector<int> arr = {}; // динамический массив
    cout << "Pls, enter size arr:";
    cin >> size;
    for (int i = size; i != 0; --i){
        int num;
        cin >> num;
        arr.push_back(num);
    }
    BubbleSort(arr);
    return 1;
}