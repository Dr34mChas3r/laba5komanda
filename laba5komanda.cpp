//  1 2 3 4 5 6 7 8 9 10 11 12 13 14
// -1 -2 -3 -4 -5 -6 -7 -8 -9 -10 -11 -12 -13 -14
//  5 -3 0 7 -2 1 9 -8 4 6 -1 3 2 -10
#include <iostream>

using namespace std;

int main() {
    const int size = 14;
    int arr[size];

    cout << "Input " << size << " numbers:";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    cout << "Accepted numbers: "; // artem - sterty cei cukl
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << endl;
    cout << "Negative elements in even positions: ";
    for (int i = 0; i < 14; ++i) {
        if (i % 2 == 0 && arr[i] < 0) {
            cout << arr[i] << " ";
        }
    }

    cout << endl;
    cout << endl;
    cout << "Array elements in odd positions: " << endl;
    for (int i = 0; i < 14; ++i) {
        if (i % 2 != 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

}