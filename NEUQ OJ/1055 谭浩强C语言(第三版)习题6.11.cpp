#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    float a,x,g;
    cin>>a;
    x=1;g=a;
    while(fabs(x-g)>=1e-5)
    {x=g;
    g=(x+a/x)/2;
    }
    cout<<fixed<<setprecision(3)<<x<<endl;
    return 0;
}
