#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string a,b;
    while(cin>>a)
    {
        b=a;
        reverse(a.begin(),a.end());
        b+=a;
        cout<<b<<endl;
    }
    return 0;
}
