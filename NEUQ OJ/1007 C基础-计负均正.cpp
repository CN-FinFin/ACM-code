#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int x,o=0,n=0;
    float sum=0;
    for(int i=1;i<=20;i++)
    {
        cin>>x;
        if(x<0)
        {
            n++;
        }
        else if(x>0)
        {
            o++;
            sum+=x;
        }
    }
    cout<<n<<endl;
    cout<<fixed<<setprecision(2)<<sum/o<<endl;

    return 0;
}
