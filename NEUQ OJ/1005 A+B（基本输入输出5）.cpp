#include<iostream>
using namespace std;
int main()
{
    int sum,n,m;
    cin>>m;
    if(!m)return 0;
    while(m)
    {
        cin>>n;
        m--;
        int a;
        sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            sum+=a;
        }
        cout<<sum<<endl;
    }
    return 0;
}
