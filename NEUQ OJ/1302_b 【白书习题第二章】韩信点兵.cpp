#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int r=11,z=0;
    for(;r<100;r++)
    {
        if(a==r%3&&b==r%5&&c==r%7)
        {
            z=1;
            break;
        }
    }
    if(z==1)
        cout<<r<<endl;
    else
        cout<<"no answer"<<endl;
    return 0;
}
