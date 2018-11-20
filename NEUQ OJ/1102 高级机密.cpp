#include<iostream>
using namespace std;
int a_b_Mod_c(int a, int b, int c)
{
    int digit[32];
    int i, k, resualt = 1;
    i = 0;
    while(b)
    {
        digit[i++] = b%2;
        b >>= 1;
    }
    for(k = i-1; k >= 0; k--)
    {
        resualt = (resualt * resualt) % c;
        if(digit[k] == 1)
        {
            resualt = (resualt * a) % c;
        }
    }
     return resualt;
}
int main(){
    int a,b,c;

    while(cin>>a>>b>>c)
    {

        cout<<a_b_Mod_c(a,b,c)<<endl;
    }
    return 0;
}
