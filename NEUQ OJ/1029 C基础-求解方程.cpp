#include <iostream>
using namespace std;
int main()
{
    int x,y,a,b,c;
    for(x=100;x<1000;x++)
    {
        a=x/100;
        b=(x%100)/10;
        c=x%10;
        y=a+10*b+100*c;
        if(x+y==1333)
        cout<<x<<"+"<<y<<"="<<"1333"<<endl;
    }
    return 0;
}
