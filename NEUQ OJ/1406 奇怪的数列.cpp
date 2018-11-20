#include<iostream>
using namespace std;
int main(){
    unsigned long long m[100];
    int n;
    m[1]=m[3]=0;
    m[2]=1;
    for(int i=4;i<=75;i++)
        {
            m[i]=m[i-3]+m[i-2]+m[i-1]+1;
        }
    while(cin>>n)
    cout<<m[n]<<endl;
    return 0;
}
