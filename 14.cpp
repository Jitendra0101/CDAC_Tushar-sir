#include<iostream>
using namespace std;

int main()
{
    int l,b;
    cout << "enter length and breadth: " << endl;
    cin >> l >> b;

    for(int i = 0 ; i < b ; i++)
    {
        if ((i < (b-1)) && i > 0)
        {
            cout << "* ";
            for(int j = 0 ; j < (l-2) ; j++)
            {
                cout << "  ";
            }
            cout << "*";
        }

        else
        {
            for (int k = 0 ; k < l-1 ; k++)
            {
                cout << "* ";
            }
            cout << "*";
        }
        cout << endl;
    }




    return 0;
}