#include <iostream>
using namespace std;
int main()
{
    int c[4],n;
    c[0]=1;
    c[3]=c[2]=c[1]=0;
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        c[3]+=c[2];
        c[2]=c[1];
        c[1]=c[0];
        c[0]=c[3];
        //cout<<i<<" "<<c[0]<<" "<<c[1]<<" "<<c[2]<<" "<<c[3]<<" "<<endl;
    }

    cout<<c[0]+c[1]+c[2]+c[3]<<endl;
    return 0;
}
