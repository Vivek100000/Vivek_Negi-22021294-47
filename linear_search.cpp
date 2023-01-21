#include <iostream>
using namespace std;

int main()
{
    int n, key, comp=0;
    cout<<"enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the value of the array:- ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }    
    cout<<"enter the value of the key: ";
    cin>>key;
    for(int i=0;i<n;i++)
    {
        comp++;
           if(arr[i] == key)
           {
               cout<<"present"<<endl;
               cout<<"total comparisons made: "<<comp;
               return 0;
           }
           
    }
    cout<<"not present"<<endl;
    cout<<"total comparisons made: "<<comp;
    return 0;
}