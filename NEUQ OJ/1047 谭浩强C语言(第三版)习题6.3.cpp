#include<iostream>
using namespace std;

int main()
{
    int n,t,sum;
    while(cin>>n)
    {
        t=1;sum=0;
        for(int i=0;i<=n;i++)
        {
            sum+=(2*t*(n-i));
            t*=10;
        }
        cout<<sum<<endl;
    }
    return 0;
}
