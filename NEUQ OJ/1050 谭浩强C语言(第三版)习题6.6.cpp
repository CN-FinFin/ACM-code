#include<iostream>
using namespace std;
int main()
{
    for(int i=100;i<=999;i++)
    {
        int a,b,c;
        c=i%10;
        b=(i/10)%10;
        a=i/100;
        if(i==a*a*a+b*b*b+c*c*c){
            cout<<i<<endl;
        }
    }
    return 0;
}
