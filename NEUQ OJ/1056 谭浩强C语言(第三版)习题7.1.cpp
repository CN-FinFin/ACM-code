#include<iostream>
using namespace std;
int main()
{
    int n;
    int id[1000]={0};
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        if(id[i]==0)
            {
                cout<<i<<endl;
                for(int j=i;j<=n;j+=i)
                    id[j]=1;
            }

       }
    return 0;
}
