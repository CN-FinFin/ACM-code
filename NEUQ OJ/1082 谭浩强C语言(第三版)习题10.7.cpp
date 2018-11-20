#include <iostream>
using namespace std;
int main()
{
    char a[1005];
    int n,m;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    cin>>m;
    for(int i=m;i<=n;i++)
        cout<<a[i];
    cout<<endl;
    return 0;
}
