#include <iostream>

using namespace std;

void sum (int a,int b)
{
    cout<<"sum="<<a+b<<endl;
}

void sum (int a,int b, int c,int d)
{
    cout<<"komplex sum="<<a+c<<"+"<<b+d<<"i"<<endl;
}

int main ()
{
    sum(1,2);
    sum(1,2,3,4);
}

