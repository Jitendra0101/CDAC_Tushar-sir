#include<iostream>
using namespace std;
void max(int a[5])
{  
    int max=0;
    int i=0;
   
    while(i<5)
    {
    if (max>a[i])
    i++;
    else 
    max=a[i];
    i++;
    } 
    
    cout<<"Maximum of the integer is : "<<max<<endl; 
    
    

}

int main()
{  
   int arr[5];
  
   
   cout<<"Enter five integers : ";
   for(int i=0;i<5;i++)
   cin>>arr[i];
   
   for(int j=0;j<5;j++)
   cout<<arr[j]<<" ";
   
   max(arr);
   
   
   return 0;


}
