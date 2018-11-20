#include<iostream>
using namespace std;
int main()
{
    int T,num[35],a,b,n;
    cin>>T;
    while(T--)
    {
        cin>>a>>b>>n;
        num[1]=a;
        num[2]=b;
        for(int i=3;i<=n;i++)
        {
            num[i]=(num[i-1]+num[i-2]);
            if(i%2==0)num[i]+=num[i-3];
        }
        cout<<num[n]<<endl;
    }
    return 0;
}
