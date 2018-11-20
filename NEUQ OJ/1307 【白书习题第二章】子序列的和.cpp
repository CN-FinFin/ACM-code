#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int f,l;
    double sum;
    while(cin>>f>>l)
    {
        sum=0;
        for(double i=f;i<=l;i++)
        {
            sum+=(1/(i*i));
            cout<<fixed<<setprecision(5)<<sum<<endl;

        }
        cout<<fixed<<setprecision(5)<<sum<<endl;
    }
    return 0;
}
