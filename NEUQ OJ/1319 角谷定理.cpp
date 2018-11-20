#include<iostream>
using namespace std;
int main()
{
    int a,cnt;
    while(cin>>a)
    {
        for(cnt=0;a!=1;cnt++)
        {
            if(a%2==0)
                a/=2;
            else
                a=3*a+1;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
