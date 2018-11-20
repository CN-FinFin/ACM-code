#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    int A[]={a,b,c};
    cin>>a>>b>>c;
    int temp;
    temp = a>=b?a:b;
    temp = temp>=c?temp:c;
    cout<<temp<<endl;
    return 0;
}
