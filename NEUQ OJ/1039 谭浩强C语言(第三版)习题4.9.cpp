#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double F;
	cin>>F;
	cout<<"c="<<setprecision(2)<<setiosflags(ios::fixed)<<5*(F-32)/9<<endl;
	return 0;
}
