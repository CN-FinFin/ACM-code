#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main()
{
    string a;
    int judge=1,ans;
    while(cin>>a)
    {
        int len=a.length();
        stack<char> s;
        for(int i=0;i<len;i++)
        {
            if(a[i]=='(')
                s.push(a[i]);
            else if(a[i]==')')
            {
                s.pop();
            }
            else {ans=s.size();break;}
        }
        cout<<ans<<endl;
    }
    return 0;
}
