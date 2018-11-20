#include<iostream>
using namespace std;
int main()
{
	int a[21];
	for(int i=0;i<20;i++)
    {
        cin>>a[i];
    }
    for(int m=0;m<20;m++)
    {
        for(int n=0;n<20;n++)
        {
            if(n==m)
                continue;
            if(a[m]%a[n]==0)
            {
                cout<<a[m]<<endl;
                break;
            }
        }
    }
	return 0;
}
