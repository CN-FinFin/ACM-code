#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main()
{
    string a;
    int len;
    while(getline(cin,a))
    {
        len=a.length();
        for(int i=0;i<len;i++)
        if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')||a[i]==' ')
            {
                cout<<a[i];
            }
            cout<<endl;
    }
    return 0;
}
