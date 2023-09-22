#include<iostream>
using namespace std;

int main()
{
    
    int i,j,k;

    int arr[] = {1,2,3};

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                if((arr[i] != arr[j]) && (arr[j] != arr[k]) && (arr[i] != arr[k]))
                cout << arr[i] << arr[j] << arr[k] << endl;
            }
        }
    }
    
    return 0;
}