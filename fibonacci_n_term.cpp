#include <iostream>
using namespace std;

int fibo_term(int n)
{
    int f=0, s=1, temp;
    n=n-2;
    while(n)
    {
        temp=s;
        s=f+s;
        f=temp;
        n--;
    }

    return s;
}

int main()
{
    int n;
    cout<<"enter the term of the fobo series:\t";
    cin>>n;
    cout<<n<<"th term of the fibo series:\t"<<fibo_term(n);
    return 0;
}