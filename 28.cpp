#include<iostream>
using namespace std;

int main()
{
    int matrix1[3][3], matrix2[3][3], matrix_mul[3][3] = {0};

    cout << "enter elements of the first matrix: ";

    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            cin >> matrix1[i][j];
        }
    }

    cout << "enter elements of the second matrix: ";

    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            cin >> matrix2[i][j];
        }
    }

    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            for(int a = 0 ; a < 3 ; a++)
            {
                matrix_mul[i][j] = matrix_mul[i][j] + (matrix1[i][a] * matrix2[a][j]); 
            }
        }

    }

    cout << "multiplied matrix is: \n";
    
    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            cout << matrix_mul[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;

}