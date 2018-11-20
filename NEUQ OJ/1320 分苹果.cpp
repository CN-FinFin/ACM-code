#include<iostream>
using namespace std;
int main()
{
    int n,a[1000]={0};a[0]=1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
            for(int j=0;j<=i/2;j++)
                a[i]+=a[j];
        else
            a[i]=a[i-1];
    }
    cout<<a[n]<<endl;
    return 0;
}
