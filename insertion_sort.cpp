#include <iostream>
using namespace std;

void insertion_sort(int *arr,int i,int key)
{
    int k=0,j,temp;
       for(j=0;j<i;j++)
       {
         if(key<arr[j])
         {
             k=1;
             break;
         }
       }
       temp = j+1;
       if(k==1)
       {
          for(int j=i;j>=temp;j--)
          {
              arr[j] = arr[j-1];
          }
          arr[j] = key;
       }
       else
       {
         arr[i] = key;
       }
}
int main()
{
   int n;
   cout<<"enter the size of the array: ";
   cin>>n;
   int key;
   int arr[n];
   for(int i=0;i<n;i++)
   {
       if(i==0)
       {
          cin>>arr[i];
       }
       else if(i>0)
       {
           cin>>key;
           insertion_sort(arr,i,key);
       }
   }
   cout<<"the sorted array is:"<<"\t";
   for(int i=0;i<n;i++)
   {
       cout<<arr[i]<<"\t";
   }
   return 0;
}

