#include <iostream>
using namespace std;

void merge(int *a,int left,int mid,int right)
{
    int k=0, i=left,j=mid+1;
    int *b=(int*)malloc(sizeof(a));
     while(i<=mid && j<=right)
    {
         if(a[i]<a[j])
        {
            b[k]=a[i];
            i++;k++;
        }

        else if(a[i]>a[j])

        {

            b[k]=a[j];

            j++;k++;

        }
        else if(a[j] == a[i])
        {
           b[k] = a[i];k++;
           b[k] = a[j];k++;
           i++;j++;
        }
    }
    while(j<=right)

    {

    b[k]=a[j];

    j++;

    k++;

    }

    while(i<=mid)

    {

        b[k]=a[i];

        i++;

        k++;

    }
    for(int i=left,m=0;i<=right;)
    {
         a[i] = b[m];
         m++;
         i++;
    }
    free(b);
}
void merge_sort(int *A,int left,int right)
{
    int mid;
   if(left<right)
   {
       mid=(left+right)/2;
       merge_sort(A,left,mid);
       merge_sort(A,mid+1,right);
       merge(A,left,mid,right);
   }   
}
int main()
{
    int A[10]={78,12,3,7,5,6,50,2,1,2};
    merge_sort(A,0,9);
    for(int i=0;i<10;i++)
    {
        cout<<A[i]<<"\t";
    }
    return 0;
}