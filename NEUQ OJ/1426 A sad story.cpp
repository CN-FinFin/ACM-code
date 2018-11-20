#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int T,a[10];
    cin>>T;
    while(T--)
    {
        int g,b;
        for(int i=0;i<6;i++)
            cin>>a[i];
        sort(a,a+6);
        g=a[5]+a[4];
        b=a[3]+a[2]+a[1];
        if(g==b)
        cout<<"HeHe!"<<endl;
        else if(g>b)
            cout<<"What a sad story!"<<endl;
        else if(g<b)
            cout<<"It will be a sad story!"<<endl;
    }
    return 0;
}
