#include<iostream>
using namespace std;
int main()
{

    int i,n,a[10];
    cout<<"enter the total no. elements:";
    cin>>n;
    cout<<"enter the elements:";
    for(i=0;i<n;i++)
    {

        cin>>a[i];
    }
   int key;
   cout<<"enter the key element you want to found :";
   cin>>key;
   for(i=0;i<n;i++)
   {

    if(a[i]==key)
    {
        cout<<"the element present in the array ";
        break;
    }}
    if(a[i]!=key)
    {  
        //k
        cout<<"element not present in the array ";
    }
    return 0;
}