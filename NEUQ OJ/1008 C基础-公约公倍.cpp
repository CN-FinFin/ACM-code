#include<iostream>
using namespace std;

int main()
{
    int m,n,y,b;
    cin>>m>>n;
    if(m<n)
    {
        m=m^n;
        n=n^m;
        m=m^n;
    }
    y=n;
    while(1)
    {
        if(m%y==0&&n%y==0)
            break;
        y--;
    }
    b=m;
    while(1)
    {
        if(b%m==0&&b%n==0)
            break;
        b++;
    }
    cout<<y<<endl<<b<<endl;
    return 0;
}
