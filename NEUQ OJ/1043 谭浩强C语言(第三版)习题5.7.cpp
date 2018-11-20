#include<iostream>
using namespace std;

int main()
{
    int cnt=1;
    char bit[9],b;
    for(cnt;1;cnt++)
    {
        cin.get(bit[cnt]);
        if(bit[cnt]<='0'||bit[cnt]>='9')
            break;
    }
    cout<<cnt-1<<endl;
    for(int i=1;i<cnt-1;i++)
        cout<<bit[i]<<" ";
    cout<<bit[cnt-1]<<endl;
    for(int i=cnt-1;i>0;i--)
        cout<<bit[i];
    return 0;
}
