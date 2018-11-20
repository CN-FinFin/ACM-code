#include<iostream>
using namespace std;
int main()
{
    int a;
    while(cin>>a)
    {
        int b,c,d,e;
        b=a/1000;
        c=(a%1000)/100;
        d=(a%100)/10;
        e=a%10;
    cout<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<endl;
    }
    return 0;
}
