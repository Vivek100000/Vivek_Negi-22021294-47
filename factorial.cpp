#include <bits/stdc++.h>
using namespace std;

int fact(int num)
{
	if(num==1)
	{
		return 1;
	}
	return num * fact(num-1);
}

int main()
{
	int num;
	cout<<"enter the number: ";
    cin>>num;
    cout<<fact(num);
}