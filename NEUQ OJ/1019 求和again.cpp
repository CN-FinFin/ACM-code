#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==-1)break;
        if(n==0)
           {
              cout<<"1"<<endl;
              continue;
           }
        cout<<"5";
        for(int i=1;i<n;i++)
            cout<<0;
        cout<<"5";
        for(int i=1;i<n;i++)
            cout<<0;
        cout<<endl;
    }
    return 0;
}
