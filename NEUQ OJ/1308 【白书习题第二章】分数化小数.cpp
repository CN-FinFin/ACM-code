#include <iostream>
using namespace std;

int main()
{
    int l,a,b,c,n=1;
    cin>>a>>b>>c;
    cout<<a/b<<".";
    while(n<=c-1)
    {
        a=10*(a%b);
        cout<<a/b;
        n++;
    }
    a=10*(a%b);
    l=a/b;
    a=10*(a%b);
    if(a/b>=5)
        l++;
        cout<<l<<endl;
    return 0;
}
