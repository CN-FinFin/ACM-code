#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    char a='a';
    int b,letter=0,blank=0,num=0,others=-1;
    while(a!='\n')
    {
        a=getchar();
        b=int(a);
        if((b>=65&&b<=90)||(b>=97&&b<=122))
        {
            letter++;
        }
        else if(b==32)
        {
            blank++;
        }
        else if(b>=48&&b<=57)
        {
            num++;
        }
        else
        {
            others++;
        }
    }
    cout<<letter<<endl;
    cout<<blank<<endl;
    cout<<num<<endl;
    cout<<others<<endl;
    return 0;
}
