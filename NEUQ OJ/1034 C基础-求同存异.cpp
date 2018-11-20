#include <iostream>
using namespace std;
int main()
{
    int a[10][2]={0},b[10];
    for(int i=0;i<6;i++)
        cin>>a[i][0];
    for(int i=0;i<8;i++)
        cin>>b[i];
    for(int i=0;i<6;i++)
        for(int j=i+1;j<6;j++)
            if(a[i][0]==a[j][0])
                a[i][1]=1;
    for(int i=0;i<6;i++)
        for(int j=0;j<8;j++)
    {
        if(a[i][0]==b[j]&&a[i][1]!=1)
            {
                cout<<a[i][0]<<endl;
                a[i][1]=1;
            }
    }
    return 0;
}
