#include <iostream>

using namespace std;
int getPeachNumber(int n,int m)
{
    int num;    //定义所剩桃子数
    if(n==m)
    {
       return 1;       //递归结束条件
    }
    else
    {
        num = (getPeachNumber(n+1,m)+1)*2;
        n--;
    }
    return num;
}
int main()
{
    int n;
    while(cin>>n)
    {
        int num = getPeachNumber(1,n);
        cout<<num<<endl;
    }

    return 0;
}
