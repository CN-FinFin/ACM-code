#include<iostream>
using namespace std;

int main()
{
    char a;
    int ch=0,num=0,sp=0,ot=0;
    while(cin.get(a))
    {
        if((a>='A'&&a<='Z')||(a>='a'&&a<='z'))
        {
            ch++;
        }
        else if(a>='0'&&a<='9')
        {
            num++;
        }
        else if(a==' ')
        {
            sp++;
        }
        else if(a!='\n')
        {
            ot++;
        }
        else
            break;
    }
    cout<<ch<<" "<<num<<" "<<sp<<" "<<ot<<endl;
    return 0;
}
