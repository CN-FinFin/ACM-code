#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n[15];
    for(int i=0;i<10;i++)
        cin>>n[i];
    sort(n,n+10);
    for(int i=9;i>0;i--)
        cout<<n[i]<<" ";
    cout<<n[0]<<endl;
    return 0;
}
