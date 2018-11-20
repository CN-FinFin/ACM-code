#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int nValue;
    int start_value;
    int index;
    while(cin>>nValue)
    {
        printf("%d*%d*%d=%d=",nValue,nValue,nValue,nValue*nValue*nValue);
        start_value=nValue*nValue-nValue+1;
        index = 0;
        while(index < nValue)
        {
            if(0!=index)
            {
                cout << "+";
            }
            cout<<start_value+index*2;
            index++;
        }
        cout<<endl;
    }
    return 0;
}
