#include<iostream>
using namespace std;

int main()
{
    int t,a,b,c;
    cin>>t;
    while(t)
    {
        cin>>a>>b>>c;
        cout<<2*(a*b+b*c+c*a)<<endl;
        t--;
    }
    return 0;
}
