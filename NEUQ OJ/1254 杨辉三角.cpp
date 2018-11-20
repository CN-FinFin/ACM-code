#include <iostream>
using namespace std;
int main()
{
    int ytr[31][31],n;
    for(int i=1;i<=30;i++)
    {
        ytr[i][1]=ytr[i][i]=1;
    }
    for(int i=3;i<=30;i++)
        for(int j=2;j<=i-1;j++)
            ytr[i][j]=ytr[i-1][j]+ytr[i-1][j-1];
    while(cin>>n)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<i;j++)
            {
                cout<<ytr[i][j]<<" ";
            }
            cout<<"1"<<endl;
        }
        cout<<endl;
    }
    return 0;
}
