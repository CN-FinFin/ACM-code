#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n[6];
    for(int i=0;i<4;i++)
        cin>>n[i];
    sort(n,n+4);
    for(int i=0;i<3;i++)
        cout<<n[i]<<" ";
    cout<<n[3]<<endl;
    return 0;
}
