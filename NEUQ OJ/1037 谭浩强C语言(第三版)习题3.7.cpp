#include <iostream>
using namespace std;
int main()
{
    char a;
    while(cin>>a)
    {
        if((a>='a'&&a<='y')||(a>='A'&&a<='Y'))cout<<(char)(a+1);
        else if(a=='z'&&a=='Z')
        {
            a-=25;
            cout<<a;
        }
    }
    return 0;
}
