//  1 2 3 4 5 6 7 8 9 10 11 12 13 14
// -1 -2 -3 -4 -5 -6 -7 -8 -9 -10 -11 -12 -13 -14
//  5 -3 0 7 -2 1 9 -8 4 6 -1 3 2 -10
#include <iostream>

using namespace std;

int main() {


    // Частина, яку виконала Вікторія
    const int size = 14;
    int arr[size];

    cout << "Input " << size << " numbers: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    // Частина, яку виконала Вікторія



    // Частина, яку виконав Любомир 
    bool allPositive = true;
    bool allNegative = true;

    for (int i = 0; i < size; ++i) {
        if (arr[i] <= 0) {
            allPositive = false;
        }
        if (arr[i] >= 0) {
            allNegative = false;
        }
    }

    if (allPositive) {
        for (int i = 0; i < size; ++i) {
            arr[i] = 1;
        }
    }
    else if (allNegative) {
        for (int i = 0; i < size; ++i) {
            arr[i] = 0;
        }
    }
    cout << "Array after checking on all >0 or <0: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Частина, яку виконав Любомир 



    // Частина, котру виконав Володимир 
    cout << "Negative elements in even positions: ";
    for (int i = 0; i < 14; ++i) {
        if (i % 2 == 0 && arr[i] < 0) {
            cout << arr[i] << " ";
        }
    }

    cout << endl;

    cout << "Array elements in odd positions: ";
    for (int i = 0; i < 14; ++i) {
        if (i % 2 != 0) {
            cout << arr[i] << " ";
        }
    }

    cout << endl;

    // Частина, котру виконав Володимир 



    // Частина, котру виконав Сергій 
    int sumNegative = 0, countNegative = 0;
    int sumPositive = 0, countPositive = 0;

    for (int i = 0; i < 14; ++i) {
        if (arr[i] < 0) {
            sumNegative += arr[i];
            countNegative++;
        }
        else if (arr[i] > 0) {
            sumPositive += arr[i];
            countPositive++;
        }
    }

    int avgNegative = (countNegative > 0) ? sumNegative / countNegative : 0;
    int avgPositive = (countPositive > 0) ? sumPositive / countPositive : 0;

    cout << "Negative average: " << avgNegative << endl << "Positive average: " << avgPositive << endl;

    for (int i = 0; i < 14; ++i) {
        if (i % 2 == 0 && arr[i] < 0) {
            arr[i] = avgNegative;
        }
        else if (i % 2 != 0) {
            arr[i] = avgPositive;
        }
    }

    cout << "Result array: ";
    for (int i = 0; i < 14; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    // Частина, котру виконав Сергій 



}