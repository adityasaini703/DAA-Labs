#include<iostream>
using namespace std;
int main()
{
 int t;
cin>>t;
while( t--) {
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
        cout<<"present ";
        break;
    }}
    if(a[i]!=key)
    {
        cout<<"not present ";
    }
}
    return 0;
}