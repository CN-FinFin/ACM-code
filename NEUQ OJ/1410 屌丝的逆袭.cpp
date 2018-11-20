#include <iostream>
using namespace std;
int main()
{
    int i,maxi=1,j,maxj=1,maxk,x[25][25][2]={0};
    while(cin>>i>>j)
    {
        if(i==0||j==0)break;
        for(int m=1;m<=i;m++)
            for(int n=1;n<=j;n++)
            cin>>x[m][n][0];
        for(int m=1;m<=i;m++)
            for(int n=1;n<=j;n++)
            {
                x[m][n][1]=x[m+1][n][0]+x[m-1][n][0]+x[m][n+1][0]+x[m][n-1][0];
                if(x[m][n][0]>0)x[m][n][1]=-x[m][n][1];
            }
            maxk=x[1][1][1];
        for(int m=1;m<=i;m++)
            for(int n=1;n<=j;n++)
                {
                    if(maxk<x[m][n][1])
                    {
                        maxk=x[m][n][1];
                        maxi=m;
                        maxj=n;
                    }
                }
        cout<<maxi<<" "<<maxj<<" "<<maxk<<endl;
    }
    return 0;
}
