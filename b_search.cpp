#include <bits/stdc++.h>
using namespace std;

void binary_search(vector<int> &v,int &num,int i,int j,int &result)
{
    if(i<=j)
    {
        int mid = (i+j)/2;
        if(v[mid]==num)
        {
            result = 1;
        }
        else if(num<v[mid])
        {
            binary_search(v,num,i,mid-1,result);
        }
        else
        {
            binary_search(v,num,mid+1,j,result);
        }
    }
}

int main() 
{
    vector<int> v;
    int n, temp,result=0;
    cout<<"enter the number of elements: ";
    cin>>n;
    cout<<"enter the elements:-\n";
    for(int i=1;i<=n;i++)
    {
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    int num;
    cout<<"enter the number to be searched: ";
    cin>>num;
    binary_search(v,num,0,n-1,result);
    if(result==1)
    {
        cout<<"element exists";
        return 0;
    }
       cout<<"element does not exists";
       return 0;
}