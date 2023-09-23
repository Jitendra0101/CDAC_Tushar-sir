#include <iostream>
using namespace std;

int main() 
{
    int arr[100];
    int n;
    int p;
    int element;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    while (true) 
    {
        cout << "Enter the position where you want to insert the element: ";
        cin >> p;
        
        if (p < 0 || p > n) 
        {
            cout << "Invalid position. Position should be from 0 to " << n << endl;
        } 
        
        else 
        {
            break;
        }
    }
    
    cout << "Enter the element to be inserted: ";
    cin >> element;

    for (int i = n; i > p; i--) 
    {
        arr[i] = arr[i - 1];
    }

    arr[p] = element;
    n++;

    cout << "Updated array: ";
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
