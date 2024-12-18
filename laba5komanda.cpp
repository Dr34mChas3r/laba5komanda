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

}