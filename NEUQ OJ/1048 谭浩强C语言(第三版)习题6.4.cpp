#include<iostream>
using namespace std;
unsigned long long jc(int n)
{
    if(n==0||n==1)
        return 1;
    unsigned long long a=1;
    for(int i=1;i<=n;i++)
    {
        a*=i;
    }
    return a;
}
int main()
{

    int n;
    unsigned long long sum;
    while(cin>>n)
    {
        sum=0;
        for(int i=1;i<=n;i++)
        {
            sum+=jc(i);
        }
        cout<<sum<<endl;
    }
    return 0;
}
