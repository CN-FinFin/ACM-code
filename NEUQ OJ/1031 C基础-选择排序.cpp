#include<iostream>
using namespace std;

int main()
{
    int x,a[15];
        while(cin>>x)
        {
            a[0]=x;
            for(int i=1;i<10;i++)
                {
                    cin>>x;
                    a[i]=x;
                }
            for(int i=9;i>=0;i--)
                for(int j=0;j<i;j++)
                {
                    if(a[j]>a[i])
                    {
                        a[j]=a[j]^a[i];
                        a[i]=a[j]^a[i];
                        a[j]=a[j]^a[i];
                    }
                }
            for(int i=0;i<10;i++)
                cout<<a[i]<<endl;
        }
    return 0;
}
