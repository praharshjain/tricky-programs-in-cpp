#include<iostream>
using namespace std;
//the below function returns a pointer to the larger number out of 2 numbers
//hence it can also be used as lvalue
int* max(int *x, int *y)
{
    if((*x)>(*y))   return x;
    else return y;
}
int main()
{
    int a=10, b=2, *c;
    cout<<"The two numbers are a = "<<a<<" and b = "<<b<<"\n";
    //normal usage of a function as rvalue
    c = max(&a,&b);
    cout<< (*c)<<" is the larger number.\n";
    //using function as lvalue (after this, the larger of the two numbers will be set to -1)
    *max(&a,&b)=-1;
    cout<<"Now, the two numbers are a = "<<a<<" and b = "<<b<<"\n";
    return 0;
}