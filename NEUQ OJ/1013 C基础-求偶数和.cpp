#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,x;
    cin>>n;
    while(n)
    {
        cin>>x;
        if(x%2!=0)
            x=0;
        sum+=x;
        n--;
    }
    cout<<sum<<endl;
    return 0;
}
