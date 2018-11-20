#include<iostream>
using namespace std;
int main()
{
    int t,n,f,l;
    //f[0]=0;
    while(cin>>n&&n)
    {
        t=f=0;
        for(int i=1;i<=n;i++)
        {
            cin>>l;
            l>f?t+=6*(l-f):t+=4*(f-l);
            f=l;
            t+=5;
        }
        cout<<t<<endl;
    }
    return 0;
}
