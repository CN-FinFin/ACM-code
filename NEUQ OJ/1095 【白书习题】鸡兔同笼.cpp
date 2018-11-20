#include<iostream>
using namespace std;

int main()
{
    int j,t,n,m;
    while(cin>>n>>m)
    {
        if(n==0&&m==0)break;
        t=(m-2*n)/2;
        j=n-t;
        if(m==2*j+4*t&&j>=0&&t>=0)
        cout<<j<<" "<<t<<endl;
        else
            cout<<"No answer"<<endl;
    }
    return 0;
}

