#include<iostream>
using namespace std;

int Count_occur(char s[], char ch)
{
    int c = 0;
    for(int i = 0 ; s[i] != '\0' ; i++)
    {
        if(s[i]==ch)
        c++;
    } 
    return c;
}

int blank_space(char s[])
{
    int co = 0;
    for(int i = 0 ; s[i] != '\0' ; i++)
    {
        if(s[i]==' ')
        co++;
    }
    return co;
}

int words(char s[])
{
    int cou = 0;
    for(int i = 0 ; s[i] != '\0' ; i++)
    {
        if(s[i]==' ')
        cou++;
    }
    return (cou+1);
}

int vowls(char s[])
{
    int coun = 0;
    for(int i = 0 ; s[i] != '\0' ; i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        coun++;
    }
    return coun;
}

int main()
{
    char str[100];
    char c;

    cout << "enter a string: ";
    cin.getline(str,100);

    cout << "choose the letter you want to find the occurences for: ";
    cin >> c;

    cout << "number of occurences of " << c << " : " << Count_occur(str,c) << endl;
    cout << "number of blank spaces are: "<< blank_space(str) << endl;
    cout << "number of words are: "<< words(str) << endl;
    cout << "number of vowels are: "<< vowls(str) << endl;

    return 0;
}
