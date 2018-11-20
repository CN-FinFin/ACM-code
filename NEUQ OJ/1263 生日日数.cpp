#include<iostream>
using namespace std;
int main()
{
    int y,m,d,day[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    while(cin>>y>>m>>d)
    {
        for (int i=1;i<=10000;i++)
        {
            if (y%4==0) day[2]=29;
            else day[2]=28;
            d++;
            if (d>day[m])
            {
                m++;
                d=1;
            }
            if(m==13)
            {
                m=1;
                y++;
            }
        }
    cout<<y<<"-"<<m<<"-"<<d<<endl;
    }
    return 0;
}
