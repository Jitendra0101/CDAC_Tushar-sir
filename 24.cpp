#include <iostream>
using namespace std;

int Max(int arr[], int size) {
    int max_val = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }
    return max_val;
}

int Min(int arr[], int size) {
    int min_val = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min_val) {
            min_val = arr[i];
        }
    }
    return min_val;
}

void multiplyBy5(int arr[], int size, int result[]) {
    for (int i = 0; i < size; i++) {
        result[i] = arr[i] * 5;
    }
}

int main() {
    int integers[5];
    int multiplied[5];

    cout << "Enter five integers:" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> integers[i];
    }

    int max_value = Max(integers, 5);
    int min_value = Min(integers, 5);

    multiplyBy5(integers, 5, multiplied);

    cout << "Maximum value: " << max_value << endl;
    cout << "Minimum value: " << min_value << endl;
    cout << "Array multiplied by 5: ";
    for (int i = 0; i < 5; i++) 
    {
        cout << multiplied[i] << " ";
    }
    cout << endl;

    return 0;
}
