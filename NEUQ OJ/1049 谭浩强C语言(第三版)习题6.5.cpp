#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a,b,c;
    float sum;
    while(cin>>a>>b>>c)
    {
        sum=(1+a)*a/2;
        for(int i=1;i<=b;i++)
            sum+=i*i;
        for(float i=1;i<=c;i++)
            sum+=1/i;
            cout<<fixed<<setprecision(2)<<sum<<endl;
    }
    return 0;
}
