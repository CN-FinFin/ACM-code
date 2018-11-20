#include<iostream>
using namespace std;
int main()
{
    int n,a,t,s=0;
    for(n=2;n<1000;n++)
    {
        t=n;
        s=0;
        while(t>0)
        {
            a=t%10;
            t=t/10;
            s=s+a*a*a;
        }
        if(s==n)
            cout<<n<<"  ";
    }
}
