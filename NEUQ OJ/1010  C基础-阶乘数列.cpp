#include<iostream>
#include<iomanip>
using namespace std;
long double jc(int n)
{
    long double ans;
    if(n<0)
        return 0;
    else if(n==0||n==1)
        ans=1;
    else
        ans=jc(n-1)*n;
      return ans;
}
int main()
{
    long double sum=0;
    for(int i=1;i<=30;i++)
    {
        sum+=jc(i);
    }
    cout<<fixed<<setprecision(2)<<scientific<<sum<<endl;
    return 0;
}
