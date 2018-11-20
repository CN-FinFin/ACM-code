#include<iostream>
using namespace std;

int main()
{
    int tep,num[15];
    for(int i=0;i<10;i++)
        cin>>num[i];
    for(int i=0;i<10;i++)
        for(int j=i+1;j<10;j++)
    {
        if(num[i]<num[j])
        {
            tep=num[i];
            num[i]=num[j];
            num[j]=tep;
        }
    }
    for(int i=0;i<10;i++)
        {
            cout<<num[i];
            if(i<9)
            cout<<" ";
        }
    return 0;
}

