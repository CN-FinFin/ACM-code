#include<iostream>
using namespace std;
int lenth(int n)
{
    if(n==1) return 1;
    if(n%2==1) return 1+lenth(n*3+1);
    else
        return 1+lenth(n/2);
}
int main()
{
    int a,b,maxn;
    while(cin>>a>>b)
    {
        maxn=lenth(a);
        for(int i=a+1;i<=b;i++)
            maxn=lenth(i)>maxn?lenth(i):maxn;
        cout<<maxn<<endl;
    }
    return 0;
}
