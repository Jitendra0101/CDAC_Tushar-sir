#include <iostream>
using namespace std;

int main() {
    int arr[100], size, p;

    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    bool valid_ind = false;

    while (!valid_ind) {

        cout << "Enter the index of the element to be deleted (1-" << size << "): ";
        cin >> p;

        if (p >= 0 && p < size) {
            valid_ind = true;
        } else {
            cout << "Invalid index. Please enter a valid index." << endl;
        }
    }

    for (int i = p; i < size; i++) {
        arr[i] = arr[i + 1];
    }

    size--;

    cout << "Array after deleting element at index " << p << ": ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
