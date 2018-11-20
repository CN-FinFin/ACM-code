#include <iostream>
using namespace std;
int main()
{
    int total =0;
    cin>>total;
    int number=3;
    int last=0;
    for(int i=2;i<=total;++i)
    {
        last=(last+number)%i;
    }
    cout<<last+1<<endl;
    return 0;
}
