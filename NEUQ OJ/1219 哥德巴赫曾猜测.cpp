#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>
using namespace std;
int Prime[9999999];
void getPrime()
{
    for(int i=2;i<=9999998;i++)
        Prime[i]=1;
    for(int i=2;i<=9999998;i++)
        if(Prime[i])
           for(int j=i+i;j<=9999998;j+=i)
               Prime[j]=0;
    return;
}
int main()
{
    //freopen("prime.txt","w",stdout);
    getPrime();
    int num,T,t;
    int cnt;
    while(cin>>num)
    {
        cnt=0;
        if(Prime[num-2])
            cnt++;
        for(int i=3;i<=num/2;i+=2)
        {
            if(Prime[i]&&Prime[num-i])
                cnt++;
            //cout<<i<<" "<<a[i]<<endl;
        }
        printf("%d\n",cnt);
    }
    return 0;
}
