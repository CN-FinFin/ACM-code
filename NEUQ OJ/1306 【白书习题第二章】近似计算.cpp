#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double sign=-1;
	double sum=0;
	for(double i=1;1/i>=1e-6;i+=2)
	{
		sign=-sign;
		sum+=sign*(1/i);
	}
	cout<<fixed<<setprecision(9)<<sum<<endl;
	return 0;
}
