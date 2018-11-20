#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int res;
    while(scanf("%d",&res)!=-1)
    {
        while(res!=1)
        {
            if(res%2==0)
            {
                printf("%d/2=%d\n",res,res/2);
                res/=2;
            }
            else
            {
                printf("%d*3+1=%d\n",res,res*3+1);
                res=res*3+1;
            }
        }
    }
    return 0;
}
