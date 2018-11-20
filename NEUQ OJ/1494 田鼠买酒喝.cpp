#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    while(cin>>a>>b>>c)
    {
        if(a>c)
        {
           a=a^c;
           c=a^c;
           a=a^c;
        }
        if(b>c)
        {
            b=b^c;
            c=b^c;
            b=b^c;
        }
        if(a*a+b*b==c*c)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
