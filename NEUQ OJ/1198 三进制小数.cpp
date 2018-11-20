#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

const double n = 0.0000001;

int main()
{
    int a, b;
    while(scanf("%d/%d", &a, &b)!=EOF)
    {
        double num = (double)a/b;
        printf(".");
        for(int i=0; i<9; i++)
        {
            num*=3;
            printf("%d", (int)floor(num+n));
            num-=floor(num+n);
        }
        num*=3;
        int ans = (int)floor(num+n);
        num-=floor(num+n);
        if(floor(num*3+n)>=2 && ans<=1)printf("%d\n", ans+1);
        else printf("%d\n", ans);
    }
    return 0;
}
