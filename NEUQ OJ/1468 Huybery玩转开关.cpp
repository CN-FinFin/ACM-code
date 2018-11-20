#include <iostream>
using namespace std;
int main()
{
    int n,res;
    while(cin>>n)
    {
        int x[100005]={0};
        res=0;
        for(int i=1;i<=n;i+=2)
            for(int j=i;j<=n;j+=i)
                if(j%i==0)x[j-1]=!(x[j-1]);
        for(int i=0;i<n;i++)
            if(x[i]==1)res++;
        cout<<res<<endl;
    }
    return 0;
}
