#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int x[50005],n;
    while(cin>>n)
    {
        for(int i=0;i<n;i++)
            cin>>x[i];
        sort(x,x+n);
        unsigned long long P=0,Q=0,T;
        for(int i=0;i<=n;i+=2)
            P+=x[i];
        for(int i=1;i<=n;i+=2)
            Q+=x[i];
        //cout<<P<<" "<<Q<<endl;
        T=P>=Q?P-Q:Q-P;
        cout<<T<<endl;
    }
    return 0;
}
