#include<iostream>
using namespace std;
int main(){
     long long a,n,s=0;
    cin>>a>>n;
    for(int i=1;i<=n;i++)
        {
            s+=i*a;
            s*=10;
        }
    cout<<s/10<<endl;
    return 0;
}
