#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int a,b,c,d;
		c=0;
		cin>>a>>b;
		for(int j=1;j<a;j++)
		{
			if(a%j==0) c=c+j;
		}

		d=0;
		for(int j=1;j<b;j++)
		{
			if(b%j==0) d=d+j;
		}if((c==b)||(d==a)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
