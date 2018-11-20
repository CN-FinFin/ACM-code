#include<iostream>
#include<cstring>
#include<string>
#include<cstdio>
using namespace std;
int main()
{
    char a[1000];
    gets(a);
    int len=strlen(a);
    for(int i=len-1;i>=0;i--)
    {
        if(a[i]!=' ')
            cout<<a[i];
    }
    return 0;
}
