#include<iostream>
#include<iomanip>
#define PI 3.1416926
using namespace std;
float area(int r)
{
    float a=PI*r*r;
    return a;
}
int main()
{
	int r;
	float a;
	for(r=1;r<=10;r++)
    {
        a=area(r);
        if(a>=40&&a<=90)
            cout<<"r="<<r<<" area="<<fixed<<setprecision(2)<<a<<endl;
    }
	return 0;
}
