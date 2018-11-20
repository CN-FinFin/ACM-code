#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double S,area,a,b,c;
    while(cin>>a>>b>>c)
    {
        S=(a+b+c)/2;
        area=sqrt(S*(S-a)*(S-b)*(S-c));
        cout<<fixed<<setprecision(3)<<area<<endl;
    }
    return 0;
}

