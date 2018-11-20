#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    char m;
    string hs;
    while(getline(cin,hs))
    {
        m=hs[0];
        for(int i=0;i<hs.length();i++)
        {
            if(m<hs[i])
                m=hs[i];
        }
        for(int i=0;i<hs.length();i++)
        {
            cout<<hs[i];
            if(m==hs[i])
                cout<<"(max)";
        }
        cout<<endl;
    }
    return 0;
}

