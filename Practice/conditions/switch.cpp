#include<iostream>
using namespace std;
int main()
{
    int a;
    a=4;
    switch(a)
    {
        case 1:
        cout<<"1";
        case 2:
        cout<<"2";
        case 3:
        cout<<"3";
        case 4:
        cout<<"4";
        default:
        cout<<"no number!";
    }
    return 0;
}