#include <iostream>
using namespace std;
int main()
{
    long long a,b;
    int mod=100000007;
    while(cin>>a>>b)
    {
        long long r=1,base=a%mod;
        while(b!=0)
        {
            if(b&1)
            {
                r*=base;
                r%=mod;
            }
            base*=base%mod;
            base%=mod;
            b>>=1;
        }
        cout<<r%mod<<endl;
    }
    return 0;
}
