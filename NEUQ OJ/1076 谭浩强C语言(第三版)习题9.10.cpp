#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main()
{
    string a;
    while(getline(cin,a))
    {
        int len=a.size();
        for(int i=0;i<len;i++)
        if((a[i]>='a'&&a[i]<='y')||(a[i]>='A'&&a[i]<='Y'))a[i]++;
        else if(a[i]=='z'||a[i]=='Z')
        {
            a[i]=a[i]-25;
        }
        cout<<a;
    }
    return 0;
}
