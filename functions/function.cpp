#include<iostream>
using namespace std;

void subtract(int a, int b)
{
        cout<<"The subtract is: "<<a-(-b);
    }
    void multiplay(int a, int b)
    {
        cout<<a*b;
    }
int main()
{
    void subtract(int a, int b);
    void multiplay(int a,int b);
    int a,b;
    subtract(a=1,b=7);
    multiplay(a,b);
}