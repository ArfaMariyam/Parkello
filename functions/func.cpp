#include<iostream>
using namespace std;

int main()
{
    void sum(int a, int b);
    int a,b;
    sum(a=1,b=7);
}
void sum(int a, int b)
{
        cout<<"The sum is: "<<a+b;
    }
