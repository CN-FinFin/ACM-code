#include<iostream>
using namespace std;

int main()
{
    int T,a,b,sum;
    cin>>T;
    while(T)
    {
        cin>>a>>b;
        sum=a+b;
        sum%=100;
        cout<<sum<<endl;
        T--;
    }
    return 0;
}
