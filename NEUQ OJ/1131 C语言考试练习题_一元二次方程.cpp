#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;
int main()
{
    float a,b,c,x1,x2;
    while(cin>>a>>b>>c)
    {
        x1=(-b+sqrt(b*b-4*a*c))/(2*a);
        x2=(-b-sqrt(b*b-4*a*c))/(2*a);
        cout<<fixed<<setprecision(2)<<x1<<" "<<x2<<endl;
    }
    return 0;
}
