#include<iostream>
using namespace std;
float apply_operation(float x,float y,char op)
{   float z;
    if (op=='+')
    {z=x+y;}
    if (op=='-')
    {z=x-y;}
    if (op=='*')
    {z=x*y;}
    if (op=='/')
    {z=x/y;}
    return z;
}
int main()
{   float a;
    float b;
    char op;
    cout<<"Please input the first number"<<endl;
    cin>>a;
    cout<<"Please input the second number"<<endl;
    cin>>b;
    cout<<"Please input the operation"<<endl;
    cin>>op;
    a=apply_operation(a,b,op);
    cout<<a<<endl;
    return 0;
}
