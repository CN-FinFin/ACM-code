#include<iostream>
using namespace std;
long long jc(int a)
{
    if(a==1||a==0)
        return 1;
    return jc(a-1)*a;
}
int main()
{
    int m,n;
    while(cin>>m>>n)
    {
        cout<<jc(m)/(jc(m-n)*jc(n))<<endl;
    }
    return 0;
}
