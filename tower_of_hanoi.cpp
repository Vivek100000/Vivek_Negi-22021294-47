#include <bits/stdc++.h>
using namespace std;

void toh(int n,char source,char destination,char help)
{
    if(n!=0)
    {
        toh(n-1,source,help,destination);
        cout<<"move "<<n<<" from "<<source<<" to "<<destination<<endl;
        toh(n-1,help,destination,source);
    }
}

int main()
{
    int n;
    cout<<"enter the number of disks: ";
    cin>>n;
    toh(n,'A','B','C');
    return 0;
}
